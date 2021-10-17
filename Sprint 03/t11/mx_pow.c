#include <stdio.h>
#include <stdbool.h>
bool mx_is_prime(int n);
bool mx_is_prime(int n)
{
   if (n > 1)
    {
        for (int i = 2; i < n; i++)
            if (n % i == 0) 
                return false;

        return true;
    }
    else 
        return false;
}
