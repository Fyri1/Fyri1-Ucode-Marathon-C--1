#include <stdbool.h>

bool mx_issuper(int c)
{
    if(c <= 90 && c >= 65)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
