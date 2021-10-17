#include "../inc/header.h"

int main(int argc, char **argv) {

    // проверки на ввод
    if(argc > 2) {

        mx_printerr("usage: ./matrix_rain [-s]\n");
        return 0;
    }

    if(argc == 2) {

        if(argv[1][0] != '-' || argv[1][1] != 's') {

            mx_printerr("usage: ./matrix_rain [-s]\n");
            return 0;
        }
    }

    setlocale(LC_ALL, "ja_JP.UTF-8");

	WINDOW* mainwin = initscr();

	curs_set(false);

    int speed = 10;
	int rows;
	int column;
	int color = 2;

	getmaxyx(mainwin, column, rows);

	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);

	curs_set(false);
	noecho();

	t_display *matrix = (t_display *) malloc(sizeof(t_display) * rows);
	
	for (int i = 0; i < rows; i++) {

		matrix[i].arr = (wchar_t *) malloc(sizeof(wchar_t) * column);

		for (int jndex = 0; jndex < column; jndex++) {

			matrix[i].arr[jndex] = mx_get_jap_s();
        }

		matrix[i].len = rand() % column;
		matrix[i].start = 0 - matrix[i].len - matrix[i].len;
		matrix[i].end = 0 - matrix[i].len;
	}

	wbkgd(mainwin, COLOR_PAIR(color));

	wclear(mainwin);

    // если флага -s нет, значит, запускаем basic
    // иначе creative 
    if(argc == 2) {
        
        mx_print(mainwin, column, rows);
    } 

    for (int i = 0; i < rows; i++) {

		for (int j = 0; j < column; j++) {

			matrix[i].arr[j] = mx_get_jap_s();
        }
    }

	while(true) {
		wtimeout(mainwin, 60 / speed * 10);

		switch(getch()) {
			case '+':
				if (speed > 20)
					speed -= 10;
				break;
			case '-':
				if (speed < 180)
					speed += 10;
				break;
			case '1':
				color = 1;
				break;
			case '2':
				color = 2;
				break;
			case '3':
				color = 3;
				break;
			case '4':
				color = 4;
				break;
			case '5':
				color = 5;
				break;
			case '6':
				color = 6;
				break;
			case '7':
				color = 7;
				break;
			case 'q':
				exit(0);
		}

		wclear(mainwin);

		for (int i = 0; i < rows; i++) {

			for (int j = 0; j < column; j++) {

				if (j >= matrix[i].start && j <= matrix[i].end ) {

					if (j == matrix[i].end) {
                        
						attroff(COLOR_PAIR(color));
						attron(COLOR_PAIR(1));
					}

					mvprintw(j, i * 2, "%lc", matrix[i].arr[j]);

					if (j == matrix[i].end) {

						attroff(COLOR_PAIR(1));
						attron(COLOR_PAIR(color));
					}

					if (j == matrix[i].start) {

						matrix[i].arr[j] = mx_get_jap_s();
                    }

					if (j == matrix[i].end) {

						matrix[i].arr[j] = mx_get_jap_s();
                    }
				}
			}

			matrix[i].start++;
			matrix[i].end++;
			
			if (matrix[i].start > column) {

				matrix[i].len = rand() % column;
				matrix[i].start = 0 - matrix[i].len - matrix[i].len;
				matrix[i].end = 0 - matrix[i].len;
			} 
		}

		refresh();
	}

	for(int i = 0; i < column; i++) {

		free(matrix[i].arr);
    }
	
	free(matrix);
	matrix = NULL;

    delwin(mainwin);
	endwin();

    return 0;
}

