/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset(a modif).c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:24:18 by nfascia           #+#    #+#             */
/*   Updated: 2021/11/23 19:25:28 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*a;

	a = s;
	i = 0;
	c = (unsigned char) c;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (s);
}
