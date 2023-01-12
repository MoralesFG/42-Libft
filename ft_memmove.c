/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:15:57 by framoral          #+#    #+#             */
/*   Updated: 2022/12/13 10:31:21 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destiny;
	char	*source;
	size_t	aux;

	source = (char *)src;
	destiny = (char *)dst;
	aux = 0;
	if (!source && !destiny)
		return (0);
	if (destiny > source)
		while (len--)
			destiny[len] = source[len];
	else
	{
		while (aux < len)
		{
			destiny[aux] = source[aux];
			aux++;
		}
	}
	return ((void *)destiny);
}
//en esta funcion src y dst se pueden solapar, comparten mermoria
//len = es la longitud
//si dst > src queremos que copie de atras hacia delante y sino al reves
//len-- es mientras len sea positivo que vaya restando
//copiamos de ambas formas para evitar que se solapen