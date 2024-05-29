/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:46:31 by abastard          #+#    #+#             */
/*   Updated: 2024/05/29 13:20:12 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen_pf(const char *str)
{
	size_t	c;

	if (!str)
		return (0);
	c = 0;
	while (str[c])
		c++;
	return (c);
}

void	ft_bzero_pf(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

void	*ft_calloc_pf(size_t number, size_t size)
{
	void	*dest;

	dest = malloc (number * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero_pf(dest, number * size);
	return (dest);
}

static size_t	ft_len(unsigned long long n, char *base)
{
	size_t				len;
	unsigned long long	base_len;

	len = 1;
	base_len = ft_strlen_pf(base);
	while (n >= base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

char	*ft_aux_pf(unsigned long long n, char *base)
{
	char	*str;
	int		num_len;
	int		base_len;

	num_len = ft_len(n, base); // llamamos a ft_len para calcular la longuitud del puntero si este fuera numerico
	base_len = ft_strlen_pf(base);// calculamos la longuitud de str si esta fueran cha
	str = ft_calloc_pf((num_len + 1), sizeof(char)); //Alocamos la memoria neccesaria
	if (!str) //Por si acaso
		return (NULL);
	while (num_len) //retorna la str al reves, del final al principio.
	{
		num_len = num_len - 1;
		str[num_len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}