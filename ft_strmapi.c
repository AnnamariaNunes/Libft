#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t len;
    size_t i;
    char* str;

    i = 0;
    if(!s || !f )
     return(0);
    len = ft_strlen(s);
    if(!(str = (char*)malloc(sizeof(char) * (len + 1))))
        return(0);
    if(i < len)
    {
        str[i] = f(i,str[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}