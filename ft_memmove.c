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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*a;
	char			*b;
	char			*c;
	unsigned long	i;

	a = src;
	b = dest;
	i = 0;
	while (a[i] != '\0')
	{
		c[i] = a[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		b[i] = c[i];
		i++;
	}
	return (dest);
}
