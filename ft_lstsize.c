/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:10:46 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/04 15:14:03 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		l;
	t_list	*current;

	if (!lst)
		return (0);
	l = 0;
	current = lst;
	while (current)
	{
		current = current->next;
		l++;
	}
	return (l);
}
