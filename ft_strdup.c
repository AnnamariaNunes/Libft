#include "libft.h"

char    *ft_strdup(const char *s1)
{
        int i;
        int len;
        char    *newstr;

        i = 0;
        len = strlen(s1);
        newstr = (char *) malloc(sizeof(char) * (len + 1));
        if(!(newstr))
            return(NULL);
        while(s1[i])
        {
            newstr[i] = s1[i];
            i++; 
        }    
        newstr[i] = '\0';
        return(newstr);
}