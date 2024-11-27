/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:36:04 by agarbacz          #+#    #+#             */
/*   Updated: 2024/11/27 16:12:22 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	char			*d;
	char			*s;

	d = (char *)dest;
	s = (char *)src;
	if (s > d)
	{
		i = 0;
		while (s[i] && i < (int)n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = (int)n - 1;
		while (d[i] && i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}
