#include "libft.h"

char *ft_strchr(const char *s, int c)
{
        while(*s != '\0')
        {       
                if(c == *s)
                {        
                    return ((char *)s); 
                }
                s++;
        }
        return(0);
}