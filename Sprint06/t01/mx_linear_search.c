#include <stdbool.h>
#include <stdio.h>
int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(char **arr, const char*s)
{

    for (int i=0; i<7; i++)
    {
        if (arr[i] == s)
        {
            return i;
        }

    }
    return -1;
}
