/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:22:16 by framoral          #+#    #+#             */
/*   Updated: 2022/12/21 13:12:29 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Cuando escribimos un write, el primer dígito corresponde a fd
 * (file descriptor), un número pequeño que no puede ser negativo. 
 * 
 * @param fd File descriptor sobre el que escribimos
 * @param c El caracter a enviar 
 * 
 * @return nada
 **/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
