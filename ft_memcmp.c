#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char* first_word;
    unsigned char* second_word;
    size_t i;

    first_word = (unsigned char*)s1;
    second_word = (unsigned char*)s2;
    i = 0;
    while(n > i)
    {
            if(first_word[i] != second_word[i])
                return(first_word[i] - second_word[i]);
            i++;
    }
    return(0);
}