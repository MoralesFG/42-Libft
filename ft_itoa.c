/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:29:07 by framoral          #+#    #+#             */
/*   Updated: 2022/12/21 13:06:11 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Utilizando malloc(3) genera un string que representa el valor entero 
 * recibido como argumento. Básicamente convierte un valor numérico en una
 * cadena de texto. La cadena contiene tantos caracteres como dígitos tenga el
 * resultado
 * 
 * @param n el entero a convertir
 * 
 * @return la string que representa el numero 
 **/

static size_t	ft_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		len++;
		return (len);
	}
	if (n < 0)
	{
		len++;
		n = -n;
		ft_len(n);
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	len;
	long	large;

	large = (long)n;
	len = ft_len(large);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (large < 0)
	{
		str[0] = '-';
		large = -large;
	}
	if (large == 0)
			str[0] = '0';
	str[len--] = '\0';
	while (large > 0)
	{
		str[len] = large % 10 + 48;
		large = large / 10;
		len--;
	}
	return (str);
}
