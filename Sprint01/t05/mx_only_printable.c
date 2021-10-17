#include <stdio.h>
#include <unistd.h>
#include <string.h>

void mx_only_printable()
{
    for(int i = 127; i > 31; i--)
    {
        mx_printchar(i);
        mx_printchar('\n');
    }
}
