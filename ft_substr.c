/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:43:45 by nfascia           #+#    #+#             */
/*   Updated: 2021/12/01 11:27:18 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_filla(char *a, char const *s, unsigned long len, unsigned int start)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*a;
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	a = NULL;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = (ft_strlen(s + start));
	a = malloc(sizeof(char) * len + 1);
	if (a == NULL)
		return (a);
	a = ft_filla(a, s, len, start);
	return (a);
}
