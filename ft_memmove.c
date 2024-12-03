/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:36:04 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/02 17:09:46 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*move(void *dest, char *d, char *s, size_t n)
{
	int		i;

	if (d == NULL && s == NULL)
		return (NULL);
	if (s > d)
	{
		i = 0;
		while (i < (int)n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	return (move(dest, d, s, n));
}
