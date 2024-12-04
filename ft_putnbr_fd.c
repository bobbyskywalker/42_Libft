/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:02:19 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/04 12:28:58 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	arr[11];
	int		i;

	i = 10;
	arr[i--] = '\0';
	if (nb == 0)
		arr[i--] = '0';
	else if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		nb = -nb;
		write(fd, "-", 1);
	}
	while (nb > 0)
	{
		arr[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	write(fd, &arr[i + 1], 10 - i - 1);
}
