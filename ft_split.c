/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:45:41 by framoral          #+#    #+#             */
/*   Updated: 2022/12/20 12:50:15 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			w++;
		}
		else
			i++;
	}
	return (w);
}

static size_t	ft_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
}

static char	**ft_cells(char **str, char *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = ft_len(s, c);
			s = s + len;
			str[i] = ft_substr(s - len, 0, len);
			if (str[i] == NULL)
			{
				ft_free(str);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	str[i] = NULL;
	return (str);
}

/**
 * @brief Esta función recorre el string contando cuantas secciones tiene que
 * tener la reserva de memoria para albergar el string en la memoria
 * 
 * @param s El string original
 * @param c El caracter delimitador 
 * 
 * @return La cantidad de elementos que tendrá el split
 **/
char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!str || !s)
		return (NULL);
	return (ft_cells(str, (char *)s, c));
}
/* le entregamos un string y un caracter que es delimitador. Con estos dos
elementos hacemos reserva de memoria y en cada celda colocaremos un string
de cada sección del string separada por el delimitador. Esto quiere decir que 
cada vez que aparezca en el string ese caracter, cortará el string y 
nosotros guardaremos cada trozo en una celda de memoria. */