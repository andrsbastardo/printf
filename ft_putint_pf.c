/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:19:37 by abastard          #+#    #+#             */
/*   Updated: 2024/06/06 15:47:00 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_putint_pf(unsigned int n, size_t *counter)
{
	char	*str;

	str = ft_address_pf(n, DECIMAL);
	ft_string_pf(str, counter);
	free(str);
}
