/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:01:35 by abastard          #+#    #+#             */
/*   Updated: 2024/05/29 12:56:53 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_pointer_pf(void *pointer, size_t *counter)
{
	char			*str;
	unsigned long	ptr_address;

	ptr_address = (unsigned long)pointer; //Inicializas el puntero
	ft_putstr_pf("0x", counter); //Imprime 0x
	str = ft_aux_pf(ptr_address, HEX_LOW_BASE); //Llamamos a las funcion aux, para que pase la string pasada a hex
	ft_putstr_pf(str, counter); //Imprime la pinche str
	free(str); // libera la memoria
}
