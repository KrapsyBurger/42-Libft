#include "libft.h"
#include <stdio.h>

/*size_t	ft_strlen(const char *s)
{
	unsigned long	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*a;
	int		i;

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*a;
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	a = NULL;
	if (s == NULL)
	{
		return (NULL);
	}
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (ft_strlen(s + start) < len)
	{
		len = ft_strlen(s + start);
	}
	a = malloc(sizeof(char) * len + 1);
	if (a == NULL)
		return (a);
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
}*/

unsigned long   ft_wordlen(const char *s, char c, unsigned int i)
{
    unsigned long   wlen;

    wlen = 0;
    while (s[i] != '\0' && s[i] != c)
    {
        i++;
        wlen++;
    }
    return (wlen + 1);
}

unsigned long   ft_wordcount(const char *s, char c)
{
    unsigned long   i;
    unsigned long   wcount;

    i = 0;
    wcount = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            wcount++;
            while (s[i] != c)
            {
                i++;
                if (s[i] == '\0')
                {
                    return (wcount);
                }
            }
        }
        i++;
    }
    return (wcount);
}

void    ft_free(char **tab, unsigned long len)
{
    unsigned long   i;

    i = 0;
    while (i < len)
    {
        free(tab[i]);
        i++;
    }
}

char **ft_split(char const *s, char c)
{
    char        **tab;
    unsigned int    i;
    unsigned long   j;

    i = 0;
    j = 0;
    if (s == NULL || !(tab = malloc(sizeof(char *) * ft_wordcount(s, c) + 1)))
    {
        return (NULL);
    }
    while (i <= ft_strlen(s))
    {
        if (s[i] != c)
        {
            tab[j] = ft_substr(s, i, ft_wordlen(s, c, i) - 1)
            j++;
            while (s[i] != c)
            {
                i++;
                if (s[i] == '\0')
                {
                    tab[j] = 0;
                    return (tab);
                }
            }
        }
        i++;
    }
    tab[j] = 0;
    return (tab);
}




/*int main()
{
    char a[] = "spl it";
    char **b = ft_split(a, 's');
    int j = 0;
    printf("%lu\n", ft_wordcount(a, 's'));
    while (j < 7)
    {
        printf("%s\n", b[j]);
        j++;
    }
    return (0);
}*/