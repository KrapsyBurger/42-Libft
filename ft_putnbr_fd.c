/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:45:43 by nfascia           #+#    #+#             */
/*   Updated: 2021/12/01 20:27:46 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	char			a;

	if (n < 0)
	{
		write(fd, "-", 1);
		i = (unsigned int)-n;
	}
	else
	{
		i = (unsigned int)n;
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		i %= 10;
	}
	a = (char)i + '0';
	write(fd, &a, 1);
}
