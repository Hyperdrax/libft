/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:41:35 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/27 10:56:46 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*f_list;

	if (!lst || !f || !del)
		return (NULL);
	f_list = ft_lstnew(f(lst->content));
	if (!f_list)
		return (NULL);
	f_list->next = ft_lstmap(lst->next, f, del);
	return (f_list);
}
