/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:14:40 by framoral          #+#    #+#             */
/*   Updated: 2022/12/27 12:56:51 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief añade el nodo "new" al principio de la lista "lst" 
 * 
 * @param lst dirección de un puntero al primer nodo de una lista
 * @param new un puntero al nodo que añadir al principio de una lista
 * 
 * @return nada
 **/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
