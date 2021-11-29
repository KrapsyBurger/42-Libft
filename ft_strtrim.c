#include "libft.h"

unsigned long	ft_strcomp(const char *s1, const char *s2)
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
	return (i);
}

unsigned long	ft_strcomp2(const char *s1, const char *s2, size_t i)
{
	unsigned long	j;

	j = 0;
	while (s2[j] != '\0')
	{
		while (s1[i] == s2[j] && i > 0)
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

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
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
	unsigned long	i;
	unsigned long	j;
	unsigned long	m;

	j = 0;
	i = ft_strcomp(s1, set);
	m = ft_strcomp2(s1, set, ft_strlen(s1) - 1);
	if (s1 == NULL)
		return (NULL);
	if (ft_firstcheck(s1, set) == 1)
	{
		result = ft_strdup("");
		return (result);
	}
	result = malloc(sizeof(char) * (m - i) + 2);
	if (!result)
		return(result);
	while (i <= m)
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
