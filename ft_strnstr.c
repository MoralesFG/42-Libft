/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:25:22 by framoral          #+#    #+#             */
/*   Updated: 2022/12/13 14:11:15 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;
	char	*str;
	char	*find;

	str = (char *)haystack;
	find = (char *)needle;
	if (find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		k = 0;
		while ((str[i + k] == find[k]) && (str[i + k]) && (i + k < len))
		{
			if (find[k + 1] == '\0')
				return (&str[i]);
			k++;
		}
		i++;
	}
	return (0);
}
/* localiza una subcadena dentro de una cadena. su diferencia con "strstr"
es que esta introduce el parametro len.

INPUT:
haystack - puntero al array en el que buscamos la subcadena
needle - puntero a la subcadena que buscamos en big
len - maximo de caracteres de big en los que buscamos

OUTPUT:
- si needle esta vacio devolvera big
- si needle no se encuentra en big, devuelve null
- si needle se encuentra en big en los primeros len caracteres, devuelve
un puntero a la primera aparicion de little en big
 */