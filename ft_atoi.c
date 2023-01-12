/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:07:06 by framoral          #+#    #+#             */
/*   Updated: 2023/01/12 12:26:57 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(char a)
{
	if (a == ' ' || a == '\f' || a == '\r' || a == '\n' || a == '\t')
		return (1);
	if (a == '\v')
		return (1);
	return (0);
}

static int	ft_sign(char a)
{
	if (a == '-' || a == '+')
		return (1);
	return (0);
}

/**
 * @brief Utilizamos atoi para convertir cadena de caracteres(char) en una 
 * variable entera(int) o lo que es lo mismo, convierte una cadena 
 * a su valor numérico 
 * 
 * @return simbolo * el número que sea resultante
 **/

int	ft_atoi(const char *str)
{
	int	i;
	int	symbol;
	int	number;

	i = 0;
	symbol = 1;
	number = 0;
	if (str[i] == '\0')
		return (0);
	while (ft_space(str[i]) != '\0')
		i++;
	if (str[i + 1] == '-' || str[i + 1] == '+')
		return (0);
	while (ft_sign(str[i]) != '\0')
	{
		if (str[i] == '-')
			symbol = -symbol;
	i++;
	}
	while (ft_isdigit(str[i]) != '\0')
	{
		number = number * 10 + str[i] - '0';
	i++;
	}
	return (symbol * number);
}
//declaramos dos funciones a parte que necesitaremos meter en atoi
//la tercera ya la tenemos, que es ft_isdigit
//queremos que cada una haga una función, para que el resultado sea el conjunto