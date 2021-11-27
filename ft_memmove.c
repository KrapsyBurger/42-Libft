/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:12:31 by nfascia           #+#    #+#             */
/*   Updated: 2021/11/24 16:09:04 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	char 			*a;
	const char		*b;

	i = 0;
	a = dest;
	b = src;
	if ((dest == NULL && src == NULL) || n == 0)
	{
		return (dest);
	}
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
		while (i < n)
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dest);
}
