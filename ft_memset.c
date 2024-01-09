/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:13:49 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/18 14:56:19 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*char_ptr;

	char_ptr = (unsigned char *) str;
	while (n > 0)
	{
		*(char_ptr++) = (unsigned char) c;
		n--;
	}
	return (str);
}

