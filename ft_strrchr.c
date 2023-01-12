/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:45:09 by framoral          #+#    #+#             */
/*   Updated: 2022/12/13 10:31:57 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	aux;
	int		i;

	str = (char *)s;
	aux = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == aux)
		{
			return (&str[i]);
		}
		i--;
	}
	return (0);
}
//hace lo mismo que strchr pero a la inversa, va buscando el caracter pero de
//el final hacia el principio, aquí también necesitamos castear