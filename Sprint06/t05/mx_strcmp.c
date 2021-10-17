int mx_strcmp(const char *s1, const char *s2);
// clang -std=c11 -Wall -Wextra -Werror -Wpedantic mx_strcmp mx_strcmp


int mx_strcmp(const char *s1, const char *s2)
{
    for (int i = 0; (s1[i] != '\0') || (s2[i] != '\0'); i++)
    { 
        if (s1[i] != s2[i])
        { 
            return s1[i] - s2[i];
        }
    }
    return 0;
}
