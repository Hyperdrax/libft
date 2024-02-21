/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:24:03 by fhensel           #+#    #+#             */
/*   Updated: 2024/02/21 16:21:02 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;
	unsigned char	uc;

	s = (unsigned char *) str;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (s[i] == uc)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}
