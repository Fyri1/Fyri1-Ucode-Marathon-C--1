#include <stdbool.h>
#include <stdlib.h>

void mx_strdel(char**);

int mx_strlen(const char *);

char *mx_strncpy(char*, const char*, int);

char *mx_strnew(const int);

bool mx_isspace(int);

char *mx_strtrim(const char*);

char *mx_strtrim(const char *str)
{
    if(str == NULL)
    {
        return NULL;
    }

    int count_spaces_before = 0;
    int count_spaces_after = 0;
    int len = mx_strlen(str);
    char *src = mx_strnew(len);
    src = mx_strncpy(src ,str, len);

    for (int i = 0; i < len; i++)
    {
        if (mx_isspace(str[i]))
        {
            count_spaces_before++;
        }

        else
        {
            break;
        }
    }

    for (int i = len - 1; i > 0; i--)
    {
        if (mx_isspace(str[i]))
        {
            count_spaces_after++;
        }

        else
        {
            break;
        }
    }

    char *dst = mx_strnew(len - count_spaces_after - count_spaces_before);

    for (int i = count_spaces_before, j = 0; i < len - count_spaces_after; i++, j++)
    {
        dst[j] = src[i];
    }

    mx_strdel(&src);
    return dst;
}

