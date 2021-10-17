#include <stdbool.h>

bool mx_isalpha(int c)
{
    if(c <= 90 && c >= 65)
    {
        return 1;
    }
    else if(c <= 122 && c >= 97)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
