#include <stdbool.h>

int mx_tolower(int c)
{
    if(c <= 122 && c >= 97)
    {
        return c;
    }
    else
    {
        c = c + 32;
        return c;
    }
}
