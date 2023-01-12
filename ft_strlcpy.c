/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:01:47 by framoral          #+#    #+#             */
/*   Updated: 2022/12/13 10:31:40 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	aux;

	aux = ft_strlen(src);
	if (dstsize == 0)
		return (aux);
	else
	{
		index = 0;
		while (src[index] != '\0' && index < dstsize -1)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (aux);
}
//esta función compara dos cadenas (origen y destino) y copia lo de una en otra
//en este caso usaremos el contador "strlen" que hemos creado anteriormente