/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:03:41 by framoral          #+#    #+#             */
/*   Updated: 2022/12/14 10:44:43 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*first;
	unsigned char	*second;

	i = 0;
	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	while (i < n)
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	if (i != n)
	{
		return (first[i] - second[i]);
	}	
	return (0);
}
/* compara los primeros n caracteres del objeto al cual indica s1 con los 
primeros n caracteres que indica s2. Nos devuelve un entero mayor que, 
igual o menor que cero. Devuelve cero si ambos son identicos.  

comprobamos si i es menor que n y en ese caso si ambas son diferentes hacemos
la resta. Luego si i es diferente de n tambien haremos la diferencia.
*/