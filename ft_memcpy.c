/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:24:53 by framoral          #+#    #+#             */
/*   Updated: 2022/12/13 10:31:17 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*i;
	char	*s;
	size_t	aux;

	i = (char *)dst;
	s = (char *)src;
	aux = 0;
	if (!s && !i)
		return (0);
	while (aux < n)
	{
		i[aux] = s[aux];
		aux++;
	}
	return ((void *)(i));
}
//copia n bytes de memoria de origen a la memoria de destino
//necesitamos castear tanto origen como destino para que no de problema
// !s esto significa que la cadena esta vacia o que es nula
//al final devolvemos un puntero a un dato que no conocemos (entero, char...)