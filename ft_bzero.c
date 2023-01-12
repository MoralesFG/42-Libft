/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:42:38 by framoral          #+#    #+#             */
/*   Updated: 2023/01/12 12:28:15 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*i;
	size_t			aux;

	i = (unsigned char *)s;
	aux = 0;
	while (aux < n)
	{
		i[aux] = 0;
		aux++;
	}
}
//aqui no devolvemos un puntero porque la funcion no es un puntero
//pone ceros en los primeros n bytes del area de bytes que comienza en s.
//Se suele usar con calloc para llenar de ceros la reserva de memoria
// y así asegurar que no tenemos elementos innecesarios