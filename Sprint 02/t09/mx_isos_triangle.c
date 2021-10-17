#include "mx_printchar.c"

void mx_isos_triangle(unsigned int length, char c)
{
    for (unsigned int a = 0; a < length; a++)
    {
        for (unsigned int b = 0; b <= a; b++)
        {
            mx_printchar(c);
        }
        mx_printchar('\n');
    }
}
