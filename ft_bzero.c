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

#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*char_str;
	size_t	i;

	char_str = (char *)s;
	while (i < n)
	{
		*char_str++ = (char)0;
		i++;
	}
}
// int main() {
//     char str1[] = "Hello, World!";
//     char str2[] = "12345";
//     char str3[] = "Testing ft_bzero";
//     printf("Original strings:\n");
//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);
//     printf("str3: %s\n", str3);
//     size_t n1 = sizeof(str1);
//     size_t n2 = 3;
//     size_t n3 = strlen(str3);
//     ft_bzero(str1, n1);
//     ft_bzero(str2, n2);
//     ft_bzero(str3, n3);
//     printf("\nStrings after applying ft_bzero:\n");
//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);
//     printf("str3: %s\n", str3);
//     return 0;
// }