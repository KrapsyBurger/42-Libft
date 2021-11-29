/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:42:41 by nfascia           #+#    #+#             */
/*   Updated: 2021/11/29 14:42:33 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	init;

	i = 0;
	j = 0;
	init = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		init = i;
		while (big[init] == little[j] && init < len && big[init] != '\0')
		{
			j++;
			init++;
		}
		if (little[j] == '\0')
			return ((char *) big + i);
		j = 0;
		i++;
	}
	return (NULL);
}
