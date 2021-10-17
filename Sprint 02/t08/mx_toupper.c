#include <stdbool.h>

int mx_toupper(int c)
{
    if(c <= 90 && c >= 65)
    {
        return c;
    }
    else
    {
        c = c - 32;
        return c;
    }
}
