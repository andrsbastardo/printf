/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexU_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:35:27 by abastard          #+#    #+#             */
/*   Updated: 2024/06/04 16:35:35 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ft_hexU_pf(unsigned int num, size_t *counter, char *base)
{
    {
	char	*str;

	str = ft_address_pf(num, base);
	ft_string_pf(str, counter);
	free(str);
    }
}