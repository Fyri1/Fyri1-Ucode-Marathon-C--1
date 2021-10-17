#include <stdlib.h>

char *mx_strnew(const int size);

int mx_strlen(const char *s);

char *mx_strdup(const char *str);

char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2)
{
    if (!s1 && !s2)
    {
        return NULL;
    }

    if (!s1)
    {
        return (char *)s2; 
    }
    
    if (!s2)
    {
        return (char *)s1;
    }

    char *s3 = mx_strnew(mx_strlen(s1) + mx_strlen(s2));

    if (!s3)
    {
        return NULL;
    }
    
    s3 = mx_strdup(s1);
    mx_strcat(s3, s2);
    return s3;
}

