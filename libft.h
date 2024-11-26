/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:02:15 by agarbacz          #+#    #+#             */
/*   Updated: 2024/11/26 14:32:36 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//SECTION: INCLUDES
# include <string.h>

//SECTION: PROTOTYPES
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_strlen(char *str);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *nptr);
//TODO:
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif