#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    unsigned char* str;
    size_t i;

    str = (char *)s;
    i = 0;
    while(n > i)
    {
        if(str[i] == (unsigned char)c)
            return((void *)&str[i]);
        i++;    
    }
    return(NULL);
}