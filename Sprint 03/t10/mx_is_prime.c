#include <stdio.h>
#include <stdbool.h>
double mx_pow(double n, unsigned int pow);
double mx_pow(double n, unsigned int pow)
{
  double b = n;
  for (int i = 1; i < pow; i++)
    n *= b;
  return n;
}