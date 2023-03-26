#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if(!s)
        return;
    i = 0;     
    if(s[i])
    {
        (*f)(i,s + i);
        i++;
    }
}