/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:36:14 by fhensel         #+#    #+#             */
/*   Updated: 2023/11/15 11:07:05 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
// int main() {
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Hello, Universe!";
//     const char str3[] = "Hello, World!";
//     size_t n1 = strlen(str1);
//     size_t n2 = strlen(str2);
//     size_t n3 = strlen(str3);
//     int result1 = ft_memcmp(str1, str2, n1);
//     printf("Test Case 1: Comparing \"%s\" and \"%s\"\n", str1, str2);
//     printf("Result: %d\n", result1);
//     int result2 = ft_memcmp(str1, str3, n1);
//     printf("\nTest Case 2: Comparing \"%s\" and \"%s\"\n", str1, str3);
//     printf("Result: %d\n", result2);
//     int result3 = ft_memcmp(str1, str1, n1);
//     printf("\nTest Case 3: Comparing \"%s\" and \"%s\"\n", str1, str1);
//     printf("Result: %d\n", result3);
//     return 0;
// }