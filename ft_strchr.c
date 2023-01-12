/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:47:13 by framoral          #+#    #+#             */
/*   Updated: 2022/12/13 10:31:32 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	aux;
	size_t	i;

	str = (char *)s;
	aux = (char)c;
	i = 0;
	while (str[i] != aux)
	{
		if (str[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (&str[i]);
}
//necesitamos crear un puntero para trabajar con el
//ponemos (char *)s para castear ese puntero
//esta función localiza la primera estancia de c en la cadena que señala s
//nos devuelve un apuntador al caracter localizado