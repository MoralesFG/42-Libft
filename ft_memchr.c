/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:50:19 by framoral          #+#    #+#             */
/*   Updated: 2023/01/12 12:30:21 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*i;
	size_t			aux;

	i = (unsigned char *)s;
	aux = 0;
	while (aux < n)
	{
		if (i[aux] == (unsigned char)c)
			return (&i[aux]);
		else
			aux++;
	}
	return (0);
}
/* busca la primera aparicion de c en los primeros caracteres de buffer. Debe 
devolver un puntero a la primera ubicacion de c, de lo contrario null.
igualamos ambas para ver si son iguales y que nos retorne el valor que encuentre,
sino seguira avanzando hasta encontrar esa c. */