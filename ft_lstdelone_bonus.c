/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:43:59 by framoral          #+#    #+#             */
/*   Updated: 2022/12/27 13:05:27 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief toma como parámetro un nodo "lst" y libera la memoria del contenido
 * utilizando la función "del" dada como parámetro, además de liberar el nodo.
 * La memoria de "next" no debe liberarse
 * 
 * @param lst el nodo a liberar
 * @param del un puntero a la función utilizada para liberar el contenido
 * del nodo
 * 
 * @return nada
 **/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
