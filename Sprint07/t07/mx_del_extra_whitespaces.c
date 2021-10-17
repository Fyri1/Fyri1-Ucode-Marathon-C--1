#include <stdbool.h>
#include <stdlib.h>

void mx_strdel(char**);

int mx_strlen(const char *);

char *mx_strncpy(char*, const char*, int);

char *mx_strnew(const int);

bool mx_isspace(int);

char *mx_strtrim(const char*);

char *mx_del_extra_whitespaces(const char*);

char *mx_del_extra_whitespaces(const char *str)
{
    int count = 0;
    char *trimstr = mx_strtrim(str);
    

    for (int i = 0; i < mx_strlen(trimstr); i++) 
	{
        if (mx_isspace(trimstr[i]) && !mx_isspace(trimstr[i + 1])) 
		{
            count++;
        }

        else if(!mx_isspace(trimstr[i]))
        {
            count++;
        }
    }

    int quantity = count;
    char *str2 = mx_strnew(quantity);

    for (int i = 0, k = 0; i < mx_strlen(trimstr); i++)
    {
        if (mx_isspace(trimstr[i]) && !mx_isspace(trimstr[i + 1])) 
        {
            str2[k] = ' ';
            k++;
        }

        else if(!mx_isspace(trimstr[i]))
        {
            str2[k] = trimstr[i];
            k++;
        }
    }

    mx_strdel(&trimstr);
    return str2;
}

