char *mx_strncpy(char *dst, const char *src, int len)
{
    if (dst == NULL && src == NULL)
    {
        return NULL;
    }
   for (int i = 0; i != len; i++)
   {
       dst[i] = src[i];
   }
   dst[len] = '\0';
   return dst;
}

