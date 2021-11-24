/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:22:32 by nfascia           #+#    #+#             */
/*   Updated: 2021/11/24 11:22:45 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dlen;
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	dlen = ft_strlen(dest);
	i2 = dlen;
	if (size <= ft_strlen(dest))
	{
		return (size + ft_strlen((char *)src));
	}
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[i2] = src[i];
		i++;
		i2++;
	}
	dest[i2] = '\0';
	return (ft_strlen((char *)src) + dlen);
}
