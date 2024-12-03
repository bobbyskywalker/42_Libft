/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:27:08 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/02 17:29:33 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*search(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] != '\0' && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
		j = 0;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!len && (big == NULL || little == NULL))
		return ((char *)big);
	if (little[0] == '\0')
		return ((char *)big);
	return (search(big, little, len));
}
