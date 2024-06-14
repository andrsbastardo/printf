/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:13:40 by abastard          #+#    #+#             */
/*   Updated: 2024/06/14 12:42:40 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_character_pf(va_arg(va, int), counter);
	else if (*str == 's')
		ft_string_pf(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_pointer_pf(va_arg(va, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_putint_pf(va_arg(va, unsigned int), counter);
	else if (*str == 'x')
		ft_hex_pf(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
	else if (*str == 'X')
		ft_hex_pf(va_arg(va, unsigned int), counter, HEX_UP_BASE);
	else if (*str == '%')
		ft_character_pf(*str, counter);
	else
		return ;
}

int	ft_printf(char const *str, ...)
{
	va_list	va;
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &counter);
		}
		else
			ft_character_pf(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}
