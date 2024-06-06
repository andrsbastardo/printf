/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:01:35 by abastard          #+#    #+#             */
/*   Updated: 2024/06/06 15:46:13 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_pointer_pf(void *pointer, size_t *counter)
{
	char			*str;
	unsigned long	ptr_address;

	ptr_address = (unsigned long)pointer;
	ft_string_pf("0x", counter);
	str = ft_address_pf(ptr_address, HEX_LOW_BASE);
	ft_string_pf(str, counter);
	free(str);
}
