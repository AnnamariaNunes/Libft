#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *dst1;
    unsigned char *src1;
    size_t i;

    if(!dst && !src)
        return(NULL);
    dst1 = dst;
    src1 = src;
    if(dst1 == src1)
        return(dst1);
    i = 0;
    while(i < n)
    {
        dst1[i] = src1[i];
        i++;
    }
    return(dst);

}