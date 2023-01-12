/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:41:39 by framoral          #+#    #+#             */
/*   Updated: 2022/12/19 19:15:31 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		k;

	if (!s1 || !s2)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		str[i] = s2[k];
		k++;
		i++;
	}
	str [i] = '\0';
	return (str);
}
/*reserva memoria con malloc y en ella concatena dos string completos
salvo por el \0 del primero. Es similar a otras funciones de concatenar strings
pero en este caso lo haremos con reserva de memoria

Una vez creada la memoria que necesitamos específicamente (tipo char con la
suma de string1 y string2 + el nulo), cada paso que demos, si no se crea bien
tiene que devolver nulo. Luego recorremos cada string hasta su nulo copiando 
1 por 1 todos sus elementos. 
*/