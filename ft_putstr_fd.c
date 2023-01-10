/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:26:56 by framoral          #+#    #+#             */
/*   Updated: 2022/12/20 13:34:26 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief guardamos el string en fd. Ft_strlen calcula el largo del string
 * para saber la cantidad de memoria que necesitamos para imprimir todo el 
 * string 
 * 
 * @param fd File descriptor sobre el que escribimos
 * @param s El string a enviar 
 * 
 * @return nada
 **/
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
