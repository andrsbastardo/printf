/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:19:37 by abastard          #+#    #+#             */
/*   Updated: 2024/06/04 15:36:29 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*excepts(int n)
{
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == INT_MAX)
		return (ft_strdup("2147483647"));
	if (n == 0)
		return (ft_strdup("0"));
	return (NULL);
}

static int	n_digits(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == INT_MIN || n == INT_MAX)
		return (11);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	size_t	cpy;

	if (n == 0 || n == INT_MIN || n == INT_MAX)
		return (excepts(n));
	cpy = n;
	len = n_digits(n);
	res = ft_calloc_pf(sizeof(char), len + 1);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		cpy = -n;
	}
	res[len] = '\0';
	while (cpy != 0)
	{
		res[len - 1] = '0' + (cpy % 10);
		cpy /= 10;
		len--;
	}
	return (res);
}

ft_putint_pf(va_arg(va, unsigned int), counter)
{
    
}