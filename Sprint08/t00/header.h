#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>

#include <stdlib.h>

#include <unistd.h>

bool mx_isdigit(int);

bool mx_isspace(char);

int mx_atoi(const char*);

char *mx_strjoin(const char*, const char*);

void mx_strdel(char **);

char *mx_concat_words(char **);

int *mx_copy_int_arr(const int*, int);

char *mx_strstr(const char*, const char*);

char *mx_strchr(const char*, int);

int mx_strlen(const char*);

int mx_strncmp(const char*, const char*, int);

int mx_count_substr(const char *, const char *);

int mx_count_words(const char*, char);

int *mx_del_dup_arr(int*, int, int*);

char *mx_strncpy(char*, const char*, int);

char *mx_strnew(const int);

char *mx_strtrim(const char*);

char *mx_del_extra_whitespaces(const char*);

void mx_del_strarr(char***);

int mx_factorial_iter(int);

int mx_gcd(int, int);

bool mx_is_prime(int);

double mx_pow(double, unsigned int);

bool mx_is_mersenne(int);

bool mx_is_narcissistic(int);

bool mx_is_odd(int);

bool mx_isalpha(int);

bool mx_islower(int);

bool mx_isupper(int);

int mx_lcm(int, int);

int mx_max(int, int, int);

int mx_mid(int, int, int);

void mx_printchar(char);

void mx_printint(int);

void mx_print_arr_int(const int*, int);

void mx_printstr(const char*);

int mx_tolower(int c);

int mx_toupper(int c);

void mx_reverse_case(char *);

void mx_sort_arr_int(int*, int);

int mx_sqrt(int);

void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *);

char *mx_strcat(char*, const char*);

int mx_strcmp(const char *, const char *);

char *mx_strcpy(char *, const char *);

char *mx_strdup(const char*);

char **mx_strsplit(char const*, char);

#endif
