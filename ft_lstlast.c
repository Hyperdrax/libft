/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:26:46 by codespace         #+#    #+#             */
/*   Updated: 2023/12/26 12:30:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*next_list_item;

	if (!lst)
		return (NULL);
	next_list_item = lst;
	while (next_list_item->next != NULL)
		next_list_item = next_list_item->next;
	return (next_list_item);
}