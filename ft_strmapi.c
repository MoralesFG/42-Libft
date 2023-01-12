/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:09:18 by framoral          #+#    #+#             */
/*   Updated: 2022/12/21 13:19:30 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief A cada caracter del string aplica la función f, dando como parámetros
 * el índice de cada caracter dentro de s y el propio caracter. Genera una nueva
 * string con el resultado del uso sucesivo de f.  
 * 
 * @param f función f a aplicar sobre cada caracter
 * @param s El string s 
 * 
 * @return string creada tras el uso correcto de f sobre cada caracter.
 **/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
			i++;
	}
	str[i] = '\0';
	return (str);
}
