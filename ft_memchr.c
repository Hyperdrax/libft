/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:24:03 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/18 17:28:04 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
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
// int main() {
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Testing ft_memchr";
//     const char str3[] = "12346789";
//     int search_char1 = 'o';
//     int search_char2 = 'f';
//     int search_char3 = '5';
//     size_t n1 = strlen(str1);
//     size_t n2 = strlen(str2);
//     size_t n3 = strlen(str3);
//     void *result1 = ft_memchr(str1, search_char1, n1);
//     printf("Test Case 1: Searching for '%c' in \"%s\"\n"
//, search_char1, str1);
//     printf("Result: %s\n", result1 ? "Found" : "Not found");
//     void *result2 = ft_memchr(str2, search_char2, n2);
//     printf("\nTest Case 2: Searching for '%c' in \"%s\"\n"
//, search_char2, str2);
//     printf("Result: %s\n", result2 ? "Found" : "Not found");
//     void *result3 = ft_memchr(str3, search_char3, n3);
//     printf("Result: %s\n", result3 ? "Found" : "Not found");
//     return 0;
// }
