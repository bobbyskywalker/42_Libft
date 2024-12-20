/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:18:46 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/11 13:15:25 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(uintptr_t ptr)
{
	int	p_len;

	p_len = 0;
	while (ptr)
	{
		p_len++;
		ptr /= 16;
	}
	return (p_len);
}

int	ft_print_ptr(uintptr_t ptr)
{
	int	len;

	if (!ptr)
		return (write(1, "(nil)", 5));
	else
	{
		len = write(1, "0x", 2);
		ft_print_hex(ptr, 1);
		len += get_len(ptr);
	}
	return (len);
}
