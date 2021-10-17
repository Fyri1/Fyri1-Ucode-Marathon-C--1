#include <stdbool.h>

bool mx_islower(int c)
{
    if(c <= 122 && c >= 97)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
