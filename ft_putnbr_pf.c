/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:19:54 by abastard          #+#    #+#             */
/*   Updated: 2024/06/04 15:33:30 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putnbr_pf(int n, size_t *counter)
{
    {
	if (n == -2147483648)
	{
		ft_character_pf('-', counter);
		ft_character_pf('2', counter);
		ft_putnbr_fd(147483648, counter);
		return ;
	}
	else if (n > 9 && n <= 2147483647)
	{
		ft_putnbr_fd(n / 10, counter);
		ft_putnbr_fd(n % 10, counter);
	}
	else if (n < 0)
	{
		ft_character_pf('-', counter);
		ft_putnbr_fd(-n, counter);
	}
	else
		ft_character_pf(n + 48, counter);
}
}