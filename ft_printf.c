/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarbacz <agarbacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:02:45 by agarbacz          #+#    #+#             */
/*   Updated: 2024/12/11 13:19:01 by agarbacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cnv(const char *format, int *printed_chars, va_list args)
{
	if (*format == 'c')
		*printed_chars += ft_print_char(va_arg(args, int));
	else if (*format == 's')
		*printed_chars += ft_print_str(va_arg(args, char *));
	else if (*format == 'p')
		*printed_chars += ft_print_ptr(va_arg(args, uintptr_t));
	else if (*format == 'd' || *format == 'i')
		*printed_chars += ft_print_int(va_arg(args, int));
	else if (*format == 'u')
		*printed_chars += ft_print_uint(va_arg(args, unsigned int));
	else if (*format == 'x')
		*printed_chars += ft_print_hex(va_arg(args, unsigned int), 1);
	else if (*format == 'X')
		*printed_chars += ft_print_hex(va_arg(args, unsigned int), 2);
	else if (*format == '%')
		*printed_chars += ft_print_char('%');
}

int	ft_printf(const char *format, ...)
{
	va_list	arg_list;
	int		printed_chars;

	printed_chars = 0;
	va_start(arg_list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX%", format[0]))
				cnv(format, &printed_chars, arg_list);
		}
		else
		{
			ft_print_char(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(arg_list);
	return (printed_chars);
}
