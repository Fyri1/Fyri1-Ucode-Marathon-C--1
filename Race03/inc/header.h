#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>   
#include <ncurses.h> 
#include <stdlib.h>
#include <locale.h>

void mx_printerr(const char *s);
int mx_strlen(const char* s);
void mx_basic();
void mx_print(WINDOW *mainwin, int colums, int rows);
wchar_t mx_get_jap_s();
int mx_strcmp(const char *s1, const char *s2);

typedef struct s_display {
	int len;
	int start;
	int end;
	wchar_t *arr;
} t_display;

#endif

