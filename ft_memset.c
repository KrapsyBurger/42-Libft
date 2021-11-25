/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:24:18 by nfascia           #+#    #+#             */
/*   Updated: 2021/11/25 19:42:48 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long	i;
	char			*a;

	a = s;
	i = 0;
	c = (unsigned char) c;
	while (i < n)
	{
		a[i] = (char)c;
		i++;
	}
	return (s);
}
