/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:53:50 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/02 13:58:52 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)(s + i));
	while (i--)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}
