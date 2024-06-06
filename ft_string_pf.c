/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:55:49 by abastard          #+#    #+#             */
/*   Updated: 2024/06/06 15:47:55 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_string_pf(char *str, size_t *counter)
{
	if (!str)
		str = "(nill)";
	while (*str)
	{
		ft_character_pf(*str, counter);
		str++;
	}
}
