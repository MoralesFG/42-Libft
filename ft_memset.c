/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:49:37 by framoral          #+#    #+#             */
/*   Updated: 2022/12/13 10:31:25 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			aux;

	a = (unsigned char *)b;
	aux = 0;
	while (len > 0 && aux < len)
	{
		a[aux] = (unsigned char)c;
			aux++;
	}
	return (a);
}
//copia el valor de c a cada uno de los primeros n caracteres del objeto