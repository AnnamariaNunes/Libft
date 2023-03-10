#include "libft.h"

size_t *ft_strcpy(char *dst,const char *src, size_t dstsize)
{
    size_t src_len;
    size_t i;

    src_len = strlen(src);
    i = 0;
    if(dstsize == 0)
        return(src_len);
    while(src[i] != '\0' && i <(dstsize - 1))        
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(src_len);

}