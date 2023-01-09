/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:56:56 by framoral          #+#    #+#             */
/*   Updated: 2022/12/27 13:07:12 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese 
 * nodo, utilizando la función ’del’ y free(3). Al final, el puntero a la 
 * lista debe ser NULL.
 * 
 * @param lst la dirección de un puntero a un nodo
 * @param del un puntero a función utilizado para eliminar el contenido de un
 * nodo
 * 
 * @return nada
 **/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	aux = *lst;
	while (*lst)
	{
		aux = aux->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
}
