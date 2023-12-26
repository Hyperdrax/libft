/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:07:10 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/26 12:30:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newlist;

    newlist = (t_list*)malloc(sizeof(t_list));
    if (newlist)
    {
        newlist->content = content;
        newlist->next = NULL;
    }
    return (newlist);
}
