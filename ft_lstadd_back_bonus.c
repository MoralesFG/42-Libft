/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 10:37:16 by framoral          #+#    #+#             */
/*   Updated: 2022/12/27 13:00:54 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief añade el nodo "new" al final de la lista "lst"
 * 
 * @param lst el puntero al primer nodo de una lista
 * @param new el puntero a un nodo que añadir a la lista 
 * 
 * @return nada
 **/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}
