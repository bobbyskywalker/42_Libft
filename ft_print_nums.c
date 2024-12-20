/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:18:42 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/11 13:16:44 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_int(int nb)
{
	char	arr[11];
	int		i;
	int		is_minus;

	i = 10;
	is_minus = 0;
	arr[i--] = '\0';
	if (nb == 0)
		arr[i--] = '0';
	else if (nb < 0)
	{
		if (nb == INT_MIN)
			return (write(1, "-2147483648", 11));
		nb = -nb;
		write(1, "-", 1);
		is_minus = 1;
	}
	while (nb > 0)
	{
		arr[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (write(1, &arr[i + 1], 10 - i - 1) + is_minus);
}

int	ft_print_uint(unsigned int nb)
{
	char	arr[11];
	int		i;

	i = 10;
	arr[i--] = '\0';
	if (nb == 0)
		return (write(1, "0", 1));
	while (nb > 0)
	{
		arr[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (write(1, &arr[i + 1], 10 - i - 1));
}
