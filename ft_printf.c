/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:13:40 by abastard          #+#    #+#             */
/*   Updated: 2024/06/04 15:19:06 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_format(va_list va, char *str, size_t *counter)
{
    if (*str =='c') //character
        ft_character_pf(va_arg(va, int), counter);
    else if (*str =='s') //string
        ft_string_pf(va_arg(va, char *), counter);
    else if (*str =='p') //puntero
        ft_pointer_pf(va_arg(va, void *), counter);
    else if (*str =='i' || *str =='d') //numero
        ft_putnbr_pf(va_arg(va, int), counter);
    else if (*str =='u') //size_t
        ft_putint_pf(va_arg(va, unsigned int), counter);
    // else if (*str =='x') // char to in
    //     ft_hex_pf(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
    else if (*str =='%') // %
        ft_character_pf(*str, counter);
}

int ft_printf(char const *str, ...)
{
    va_list va;
    size_t counter;
    
    if (!str)
        return (0);
    counter = 0;
    va_start(va, str);
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            ft_format (va, (char *)str, &counter);
        }
        else
            ft_character_pf(*str,&counter);
        str++;
    }
    va_end(va);
    return (counter);
}
