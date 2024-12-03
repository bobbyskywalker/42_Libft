/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:26:44 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/03 11:35:27 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sc;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (is_in_set(*s1, set))
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size > 0 && is_in_set(s1[size - 1], set))
		size--;
	sc = (char *)malloc(sizeof(char) * (size + 1));
	if (!sc)
		return (NULL);
	ft_strlcpy(sc, s1, size + 1);
	return (sc);
}
