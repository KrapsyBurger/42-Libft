#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char            *a;
    unsigned long   i;
    unsigned long   j;

    i = 0;
    j = 0;
    a = malloc(sizeof(char) * (len + 1));
    if (a == NULL)
    {
        return (a);
    }
    while (s[i] != '\0')
    {
        if (i >= start && j < len)
        {
            a[j] = s[i];
            j++;
        }
        i++;
    }
    a[j] = '\0';
    return (a);
}
