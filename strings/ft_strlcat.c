#include "libft.h"

size_t ft_strlcat(char *dst, char *src, size_t size)
{
    size_t i;
    size_t dst_len;
    size_t src_len;
 
    i = 0;
    src_len = strlen(src);
    dst_len = strlen(dst);
    if(size == 0 || size <= dst_len)
        return(src_len + size);
    while (src[i] && i < (size - dst_len - 1))
    {
        dst[dst_len + i] = src[i];
        i++;
    }
        
    dst[dst_len + 1] = '\0';
    return(src_len + dst_len);
}