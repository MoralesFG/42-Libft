/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:21:45 by framoral          #+#    #+#             */
/*   Updated: 2022/12/27 12:58:41 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief devuelve el último nodo de la lista
 * 
 * @param lst el principio de la lista
 * 
 * @return último nodo de la lista
 **/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	aux = lst;
	while (aux)
	{
		if (aux->next == NULL)
			return (aux);
		aux = aux->next;
	}
	return (aux);
}
