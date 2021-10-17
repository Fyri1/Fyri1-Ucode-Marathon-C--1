#include <stdio.h>
#include <stdbool.h>
bool mx_is_prime(int n);
double mx_pow(double n, unsigned int pow);
bool mx_is_mersenne(int n);

bool mx_is_mersenne(int n);
{
  int Mar = 0;
  int k=1;
  if (mx_is_prime(n) == true)
  {
    while (Mar <= n)
    {
      Mar = mx_pow(2, k) - 1;
      k++;

      if (Mar == n)
      {
        return true;
      }
      
    }
    return false;
  }
  else
  {
    return false;
  }
}
