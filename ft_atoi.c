#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0 ;
    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -sign;
            i++;
    }
    while (str[i] && ft_isdigit(str[i]))
    {
            result = (result * 10) + (str[i] - 48);
            i++; 
    }
    return(result * sign);
}
