/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:48:49 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/27 10:30:09 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	total_size;
	char	*char_str;
	void	*allocated_memory;

	total_size = nitems * size;
	if (nitems != 0 && total_size / nitems != size)
	{
		return (NULL);
	}
	allocated_memory = malloc(total_size);
	if (allocated_memory != NULL)
	{
		char_str = (char *)allocated_memory;
		while (total_size--)
			*char_str++ = (char)0;
	}
	return (allocated_memory);
}
