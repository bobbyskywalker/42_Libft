/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:27:08 by agarbacz          #+#    #+#             */
/*   Updated: 2024/11/29 16:28:37 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*search(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_start;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen((char *)little);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			little_start = i;
			while (big[i + j] == little[0])
			{
				little_start = i;
				if (j == little_len - 1)
					return ((char *)&big[little_start]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!little[0])
		return ((char *)big);
	return (search(big, little, len));
}
// int main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	char * empty = (char*)"";
// 	// assert(ft_strnstr(haystack, needle, -1) == haystack + 1);
// 	assert(strnstr(haystack, needle, -1) == haystack + 1);
// 	// assert(ft_strnstr(empty, "", -1) == empty);
// 	// assert(ft_strnstr(empty, "", 0) == empty);
// 	// assert(ft_strnstr(haystack, "aaabc", 5) == haystack);
// 	// assert(ft_strnstr(haystack, "abcd", 9) == haystack + 5);
// 	return 0;
// }