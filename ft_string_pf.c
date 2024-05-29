/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:55:49 by abastard          #+#    #+#             */
/*   Updated: 2024/05/29 11:58:05 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_string_pf(char * str, size_t *counter)
{
    if(!str)
        str = "(null)";
    while(*str)
    {
        ft_character_pf(*str, counter)
        str++;
    }   
}