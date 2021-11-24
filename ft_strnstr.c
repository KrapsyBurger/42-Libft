/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:42:41 by nfascia           #+#    #+#             */
/*   Updated: 2021/11/24 10:42:15 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
	{
		return ((char *) big);
	}
	while (i < len)
	{
		j = 0;
		while (little[j] == big[i] && i < len)
		{
			i++;
			j++;
			if (little[j] == '\0')
			{
				return ((char *)big + (i - j));
			}
		}
		i++;
	}
	return (NULL);
}
