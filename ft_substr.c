#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char* sub;

    i = 0;
    j = 0;
    if(!s)
        return(NULL);
    if(!(sub = (char *)malloc(sizeof(char) * (len + 1))))
        return(NULL);
    while(s[i])
    {
        if(i >= start && j < len)
        {
             sub[j] = s[i];
             j++;
        }
        i++;
    }    
    sub[j] = '\0';
    return(sub);
}