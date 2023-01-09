/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:14:13 by framoral          #+#    #+#             */
/*   Updated: 2022/12/27 13:08:26 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Itera la lista ’lst’ y aplica la función ’f’ en el contenido 
 * de cada nodo.
 * 
 * @param lst un puntero al primer nodo
 * @param f un puntero a la función que utilizará cada nodo
 * nodo
 * 
 * @return nada
 **/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
