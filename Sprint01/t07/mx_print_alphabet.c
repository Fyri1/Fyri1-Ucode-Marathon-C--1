#include <stdio.h>
#include <unistd.h>
#include <string.h>

void mx_print_alphabet(void);

void mx_print_alphabet()
{
    int flag = 0;
    for(int i = 65, j = 97; j < 123; i++, j++)
    {
        if (flag == 0)
        {
            mx_printchar(i);
            flag = 1;
        }
        else
        {
            mx_printchar(j);
            flag = 0;
        }   
    }
    mx_printchar('\n');
}
