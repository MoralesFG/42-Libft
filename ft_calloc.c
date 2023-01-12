/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:05:31 by framoral          #+#    #+#             */
/*   Updated: 2023/01/12 11:06:24 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;

	aux = malloc(size * count);
	if (aux == NULL)
		return (0);
	else
	{
		ft_bzero(aux, (size * count));
		return (aux);
	}
}
/* Asigna espacio de almacenamiento para una matriz de number elementos, cada 
uno de size bytes de longitud. Cada elemento se inicializa en 0. Devuelve
la direccion apuntada a la memoria si la asignacion es exitosa o NULL 
si falla 
En resumen, reserva toda la memoria que le digamos como malloc
(por eso multiplicamos size * count),pero tambien
la deja limpia al usar bzero */