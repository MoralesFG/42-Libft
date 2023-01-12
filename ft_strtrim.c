/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:16:00 by framoral          #+#    #+#             */
/*   Updated: 2022/12/20 10:42:13 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	n;

	count = 0;
	n = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	if (s1[count] == '\0' && n == '\0')
		return (ft_strdup(""));
	while (ft_strchr(set, s1[count]))
	{
		count++;
	}
	while (ft_strchr(set, s1[n]))
	{
		n--;
	}
	return (ft_substr(s1, count, n - count + 1));
}
/*elimina todos los caracteres de la string set desde el principio y 
desde el final de s1, hasta encontrar un caracter no perteneciente a set. La
string resultante se devuelve con una reserva de malloc(3)
Contemplamos que si ambas cadenas estan vacías devuelvan nulo. Luego si nuestra
cadena 1 con su contador (s1[count]) y nuestra n son nulos, queremos que nos
retorne la funcion strdup QUE YA CONTEMPLA MALLOC. 
Usamos funcion strchr y substr porque lo que necesitamos lo que hacen en
este caso */