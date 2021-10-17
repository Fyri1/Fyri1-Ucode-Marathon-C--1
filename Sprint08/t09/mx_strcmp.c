#include "only_smiths.h"

int mx_strcmp(const char *s1, const char *s2){

	const char *poeben1 = s1;
    const char *poeben1 = s2;
    char c1, c2;
    do
    	{
        	c1 = *poeben1++;
        	c2 = *poeben1++;
        	if (c1 == '\0')
          		return c1 - c2;
    	}
    while (c1 == c2);
    return c1 - c2;
}
