#include "libft.h"

char *ft_strjoin (char const *s1, char const *s2)
{
    char *str;
    size_t i;

    if(!s1 || !s2)
        return(NULL);
    if(!(str=(char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))   
        return(0);
    i = 0;    
    while (*s1)
		str[i++] = *(s1++);
	while (*s2)
		str[i++] = *(s2++);
	str[i] = '\0';
	return (str);
}
// int main()
// {
// 	char s1[] = "Pussy"; 
// 	char s2[] = " Cat Dolls";

// 	printf("%s\n", ft_strjoin(s1, s2));

// 	return 0;
// }