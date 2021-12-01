#include "libft.h"

unsigned long   ft_ncheck(n)
{
    unsigned long   i;

    if (n < 0)
        i = (unsigned long)-n;
    else
        i = (unsigned long)n;
    return (i);
}

char    *ft_resultalloc(char *result, int n, unsigned long b)
{
    if (n < 0)
        result = malloc(sizeof(char) * b + 2);
    else if (n > 0)
        result = malloc(sizeof(char) * b + 1);
    return (result);
}

char    *ft_fill(char *result, unsigned long i, unsigned long a, unsigned long j)
{
    while (i * a > i)
    {
        a /= 10;
        result[j] = (i / a) % 10 + '0';
        j++;
    }
    result[j] = '\0';
    return (result);
}

void    norminettelol(unsigned long *a, unsigned long *b, unsigned long *j)
{
    *a = 1;
    *b = 0;
    *j = 0;
}

char    *ft_itoa(int n)
{
    unsigned long    a;
    unsigned long    b;
    char             *result;
    unsigned long    j;

    result = NULL;
    norminettelol(&a, &b, &j);
    if (n <= -2147483648)
        return (ft_strdup("-2147483648"));
    while (ft_ncheck(n) / a > 0)
    {
        a *= 10;
        b++;
    }
    result = ft_resultalloc(result, n, b);
    if (n == 0)
        return (ft_strdup("0"));
    if (result == NULL)
        return (result);
    if (n < 0)
    {
        j = 1;
        result[0] = '-';
    }
    return (ft_fill(result, ft_ncheck(n), a, j));
}

