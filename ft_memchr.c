/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:37:02 by nfascia           #+#    #+#             */
/*   Updated: 2021/11/24 15:37:16 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned long	i;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
