/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>        +#+  +:+       +#+        	  */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:34:23 by fhensel           #+#    #+#             */
/*   Updated: 2023/10/11 13:04:17 by fhensel        ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*char_str;
	size_t	i;

	i = 0;
	char_str = (char *)s;
	while (i < n)
	{
		*char_str++ = (char)0;
		i++;
	}
}
