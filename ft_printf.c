/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:13:40 by abastard          #+#    #+#             */
/*   Updated: 2024/06/06 16:41:17 by abastard         ###   ########.fr       */
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
		ft_hexl_pf(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
	else if (*str == 'X')
		ft_hexu_pf(va_arg(va, unsigned int), counter, HEX_UP_BASE);
	else if (*str == '%')
		ft_character_pf(*str, counter);
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

/* int	main()
{
	char	c;
	int		n;
	char 	*b;
	int		hex;

	c = 'a';
	n = -19621;
	b = "cspdiuxX";
	hex = 95;
	ft_printf(" Hola esto es una %c\n 
	Esto es un %d\n Imprime la string %s\n
	 Cuya dirección de puntero es %p\n", c, n, b, b);
	printf (" Letra esperada %c\n Digito esperado %d\n string esperada %s\n
	 Dirección esperada %p\n\n", c, n, b, b);
	ft_printf(" Imprimimos el número como unsigned %u\n", n);
	printf(" Numero unsigned esperado %u\n\n", n);
	ft_printf(" Imprimimos el número 16 como hexadecimal.
	 Numero esperado 5f. Numero recibido %x\n", hex);
	ft_printf(" Imprimimos el número 16 como hexadecimal.
	 Numero esperado 5F. Numero recibido %X\n", hex);
	printf("Resultados hexadecimales esperados %x, %X\n\n", hex, hex);
} */