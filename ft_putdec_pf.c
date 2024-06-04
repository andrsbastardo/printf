/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:42:12 by abastard          #+#    #+#             */
/*   Updated: 2024/06/04 17:27:07 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void    ft_putdec_pf(float n, size_t *counter)
{
    //Calcular la longuitud del numero
    //Imprimir el numero hasta que numero sea 0
    //Restar la cantidad de numeros imprimidos con la cantidad de numeros totales
    // multiplicar el numero actual por la cantidad de numeros restantes
    // Imprimir una coma
    // Imprimir los numeros restantes
}

size_t	ft_long(unsigned long long n, char *base)
{
	size_t				len;
	unsigned long long	base_len;

	while (n < 0)
	{
		n = n/10;
		len++;
	}
    
	return (len);
    printf("La longuitud es %ld",len);
}