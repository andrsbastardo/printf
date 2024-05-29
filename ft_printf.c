/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:13:40 by abastard          #+#    #+#             */
/*   Updated: 2024/05/29 11:31:59 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(char const *str, ...)
{
    va_list va;
    size_t counter;
    
    if (!str)
        return (0);
    counter = 0;
    va_start(va, str)
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            ft_format (va, (char *)str, &counter);
        }
        else
            ft_putcharf(*str,&counter);
        str++;
    }
    va_end(va);
    return (counter);
}

void    ft_format(va_list va, char *str, size_t *counter)
{
    if (*str =='c') //character
        ft_character(va_arg(va, int), counter)
    else if (*str =='s') //string
        ft_
    else if (*str =='p') //puntero
        ft_
    else if (*str =='i' || *str =='d') //numero
        ft_
    else if (*str =='u') //size_t
        ft_
    else if (*str =='x') // char to in
        ft_
    else if (*str =='%') // %
        ft_
}