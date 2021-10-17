#include "../inc/header.h"

void mx_print(WINDOW *mainwin, int colums, int rows) {

    init_pair(3, COLOR_GREEN, COLOR_BLACK);
	wbkgd(mainwin, COLOR_PAIR(3));

    if (colums > 16 && rows > 32) {

        int x = colums / 8;
        int y = rows / 64;

        usleep(15000);

        char first[] = "Wake up , Neo..";
        char second[] = "The Matrix has you..";
        char third[] = "Follow the white rabbit";
        char fourth[] = "Knock, knock, Neo";

        wclear(mainwin);

        for (int i = 0; i < 15; i++) {

            mvwaddch(mainwin, y, x + i, first[i]);
            refresh();
            usleep(170000);
        }

        wclear(mainwin);
        usleep(100000);

        for (int i = 0; i < 20; i++) {

            mvwaddch(mainwin, y, x + i, second[i]);
            refresh();
            usleep(170000);
        }

        wclear(mainwin);
        usleep(100000);

        for (int i = 0; i < 23; i++) {

            mvwaddch(mainwin, y, x + i, third[i]);
            refresh();
            usleep(170000);
        }

        wclear(mainwin);
        usleep(100000);

        for (int i = 0; i < 17; i++) {

            mvwaddch(mainwin, y, x + i, fourth[i]);
            refresh();
            usleep(170000);
        }
    }
}

