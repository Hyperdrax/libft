/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:27:56 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:21:41 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>
// #include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		dst_len = size;
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size - dst_len)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (dst_len + src_len);
}
// int main(void)
// {
// 	char str1[20] = "Hello";
// 	char str2[20] = "World";
// 	char str3[20] = "Hello";
// 	char str4[20] = " World";
// 	ft_strlcat(str1, str2, 10);
// 	ft_strlcat(str3, str4, 14);
// 	printf("%s\n", str1);
// 	printf("%s\n", str3);
// 	return 0;
// }
