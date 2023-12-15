/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:47:20 by fhensel           #+#    #+#             */
/*   Updated: 2023/11/15 11:37:42 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t dstsize)
{
	size_t	i;
	size_t	ii;

	i = 0;
	ii = 0;
	while (source[ii] != '\0' && ii < dstsize - 1)
	{
		destination[i] = source[ii];
		i++;
		ii++;
	}
	destination[i] = '\0';
	while (source[ii] != '\0')
		ii++;
	return (ii);
}

// int	main(void)
// {
// 	int	i;
// 	char	src[12] = " worldworldw";
// 	char	dest[24] = "hello";

// 	i = 0;
// 	strlcpy(dest, src, sizeof(dest));
// 	while (dest[i] != '\0')
// 	{
// 		printf("%c",dest[i]);
// 		i++;
// 	}
// }
