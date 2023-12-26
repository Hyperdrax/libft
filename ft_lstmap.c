/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:41:35 by codespace         #+#    #+#             */
/*   Updated: 2023/12/26 12:48:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list		*f_list;

	if (!lst || !f)
		return (NULL);
	f_list = ft_lstnew(f(lst->content));
	if (!f_list)
		return (NULL);
	f_list->next = ft_lstmap(lst->next, f, del);
	return (f_list);
}
