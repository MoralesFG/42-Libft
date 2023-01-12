/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:07:07 by framoral          #+#    #+#             */
/*   Updated: 2022/12/19 18:38:21 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if ((ft_strlen(s) - start) < len)
	len = ft_strlen(s) - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
/* Reserva con malloc y devuelve una substring de la string s.
La substring empieza desde el índice start y tiene una longitud máxima len 
INPUTS - s: cadena, start: inicio, len: longitud */