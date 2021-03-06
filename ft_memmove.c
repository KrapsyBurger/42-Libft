/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:12:31 by nfascia           #+#    #+#             */
/*   Updated: 2021/12/01 20:32:17 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	norm(unsigned long i, unsigned long n, char *a, const char *b)
{
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	char			*a;
	const char		*b;

	i = 0;
	a = dest;
	b = src;
	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	if (src < dest)
	{
		i = n - 1;
		while (i > 0)
		{
			a[i] = b[i];
			i--;
		}
		a[i] = b[i];
	}
	else
	{
		norm(i, n, a, b);
	}
	return (dest);
}
