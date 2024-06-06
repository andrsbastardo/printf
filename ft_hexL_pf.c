/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexL_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:25:53 by abastard          #+#    #+#             */
/*   Updated: 2024/06/06 15:43:37 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexl_pf(unsigned int num, size_t *counter, char *base)
{
	char	*str;

	str = ft_address_pf(num, base);
	ft_string_pf(str, counter);
	free(str);
}
