#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *temp;

    temp = (void *)malloc(count * size);
    if(!temp)
        return(NULL);
        
    ft_bzero(temp, size * count);
    return(temp);
}