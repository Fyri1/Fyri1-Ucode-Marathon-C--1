char *mx_strncpy(char *dst, const char *src, int len)
{
    for (int i = 0; i < len; i++)
    {
        dst[i] = src[i];
        dst[i+1] = '\0';
    }
    
    return dst;
}

