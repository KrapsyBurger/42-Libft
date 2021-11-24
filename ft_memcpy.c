/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy(a modif).c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:37:20 by nfascia           #+#    #+#             */
/*   Updated: 2021/11/24 11:53:02 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*a;
	char		*b;
	int			i;
	int			j;

	a = src;
	b = dest;
	i = ft_strlen(b);
	j = 0;
	while (j < n)
	{
		b[i] = a[j];
		j++;
		i++;
	}
	return (dest);
}
