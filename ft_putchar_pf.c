/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:42:11 by abastard          #+#    #+#             */
/*   Updated: 2024/05/29 11:44:27 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char   ft_putchar_pf(char c,size_t *counter)
 {
    write(1, &c, 1);
    (counter)++;
 }