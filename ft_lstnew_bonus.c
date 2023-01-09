/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:21:20 by framoral          #+#    #+#             */
/*   Updated: 2022/12/27 12:55:16 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Crea un nuevo nodo utilizando malloc(3). La variable content se
 * inicializa con el contenido del parámetro content. La variable next con Null 
 * 
 * @param content El contenido con el que crear el nodo
 * 
 * @return el nuevo nodo
 **/
t_list	*ft_lstnew(void *content)
{
	t_list	*source;

	source = (t_list *)malloc(sizeof(t_list));
	if (!source)
		return (NULL);
	source->content = content;
	source->next = 0;
	return (source);
}
