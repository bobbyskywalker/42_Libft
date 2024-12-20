/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:07:00 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/11 13:15:54 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function calculates the len of a potential
// hexstring based off an int argument
// bitwise right shift calculates the length
// +3 is used for rounding up
static int	hexstr_length(uintptr_t n)
{
	int	bit_length;

	bit_length = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		bit_length++;
		n >>= 1;
	}
	return ((bit_length + 3) / 4);
}

static int	calc_hexstr(char *res, uintptr_t arg, int case_p)
{
	char	*hex_dict;
	int		mod;
	int		i;

	if (case_p == 1)
		hex_dict = "0123456789abcdef";
	else
		hex_dict = "0123456789ABCDEF";
	i = 0;
	while (arg)
	{
		mod = arg % 16;
		res[i] = hex_dict[mod];
		arg /= 16;
		i++;
	}
	return (i);
}

// case param: 1 - lowercase, 2 - uppercase
int	ft_print_hex(uintptr_t arg, int case_p)
{
	char	*res;
	int		i;

	if (!arg)
	{
		write(1, "0", 1);
		return (1);
	}
	else if ((int) arg == INT_MIN)
	{
		write(1, "80000000", 8);
		return (8);
	}
	res = ft_calloc(hexstr_length(arg) + 1, sizeof(char));
	if (!res)
		return (-1);
	i = calc_hexstr(res, arg, case_p);
	while (i > 0)
		write(1, &res[--i], 1);
	free(res);
	return (hexstr_length(arg));
}
