/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:26:46 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/27 10:28:00 by fhensel          ###   ########.fr       */
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
