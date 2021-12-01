/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:17:03 by nfascia           #+#    #+#             */
/*   Updated: 2021/12/01 16:48:41 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_wordlen(const char *s, char c, int i)
{
	unsigned long	wlen;

	wlen = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		wlen++;
	}
	return (wlen + 1);
}

unsigned long	ft_wordcount(const char *s, char c)
{
	unsigned long	i;
	unsigned long	wcount;

	i = 0;
	wcount = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			wcount++;
			while (s[i] != c)
			{
				i++;
				if (s[i] == '\0')
					return (wcount);
			}
		}
		i++;
	}
	return (wcount);
}

char	**ft_free(char **tab, unsigned long len)
{
	unsigned long	i;

	i = 0;
	while (i < len)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_norm(char **tab, unsigned long j)
{
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	int				i;
	unsigned long	j;

	i = -1;
	j = 0;
	tab = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (tab == NULL || s == NULL)
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c)
		{
			tab[j] = ft_substr(s, (unsigned int)i, ft_wordlen(s, c, i) - 1);
			if (tab[j] == NULL)
				return (ft_free(tab, j));
			j++;
			while (s[i] != c)
				if (s[++i] == '\0')
					return (ft_norm(tab, j));
		}
	}
	return (ft_norm(tab, j));
}
