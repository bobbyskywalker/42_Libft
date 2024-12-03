/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:43:31 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/03 18:44:13 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, (char *)s1, s1_len + 1);
	ft_strlcat(result, (char *)s2, s2_len + s1_len + 1);
	return (result);
}
