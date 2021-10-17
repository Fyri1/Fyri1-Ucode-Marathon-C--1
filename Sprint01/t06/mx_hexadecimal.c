#include <stdio.h>
#include <unistd.h>
#include <string.h>

void mx_hexadecimal()
{
    for(int i = 0; i < 16; i++)
    {
        if( i < 10)
        {
            mx_printchar(i+48);
        }
        else
        {
            mx_printchar(i+57);
        }
    }
    mx_printchar('\n');
}
