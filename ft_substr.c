/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:43:45 by nfascia           #+#    #+#             */
/*   Updated: 2021/12/01 20:31:15 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_filla(char *a, char const *s, unsigned long l, unsigned int b)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= b && j < l)
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
