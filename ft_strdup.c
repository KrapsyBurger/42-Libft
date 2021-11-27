#include "libft.h"

char    *ft_strdup(const char *s)
{
    char        *a;
    int         i;

    a = malloc(ft_strlen(s) + 1);
    i = 0;
    if (a == NULL)
    {
        return (a);
    }
    while (s[i] != '\0')
    {
        a[i] = s[i];
        i++;
    }
    a[i] = '\0';
    return (a);
}
