#include "libft.h"

unsigned int	ft_strcomp(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned long	j;

	i = 0;
	j = 0;
	while (s2[j] != '\0')
	{
		while (s1[i] == s2[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
	return (i);
}

unsigned long	ft_strcomp2(const char *s1, const char *s2)
{
	unsigned long	j;
	unsigned long	i;

	j = 0;
	i = ft_strlen(s1) - 1;
	while (s2[j] != '\0')
	{
		while (s1[i] == s2[j])
		{
			i--;
			j = 0;
		}
		j++;
	}
	return (i);
}

unsigned long	ft_firstcheck(const char *s1, const char *s2)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	while (s2[j] != '\0')
	{
		while (s1[i] == s2[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
	if (s1[i] == '\0')
	{
		return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*result;
	unsigned int	i;
	unsigned long	j;
	unsigned long	m;

	j = 0;
	if (ft_firstcheck(s1, set) == 1)
	{
		return(ft_strdup(""));
	}
	i = ft_strcomp(s1, set);
	m = ft_strcomp2(s1, set);
	if (s1 == NULL)
		return (NULL);
	result = ft_substr(s1, i, m - i + 1);
	if (!result)
		return(result);
	return (result);
}
