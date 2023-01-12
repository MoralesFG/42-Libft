/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:31:18 by framoral          #+#    #+#             */
/*   Updated: 2022/12/21 13:31:48 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief A cada caracter del string aplica la función f, dando como parámetros
 * el índice de cada caracter dentro de s y la dirección del propio caracter,
 * que puede modificarse si es necesario. 
 * 
 * @param f función f a aplicar sobre cada caracter
 * @param s El string s que iterar
 * 
 * @return string creada tras el uso correcto de f sobre cada caracter.
 **/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			len;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
