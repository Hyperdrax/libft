/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:11:11 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/26 18:45:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	s = (const char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
// int main() {
//     char dest1[20];
//     char dest2[20];
//     char dest3[20];
//     const char src1[] = "Hello, World!";
//     const char src2[] = "Testing ft_memcpy";
//     const char src3[] = "123456789";
//     size_t n1 = strlen(src1);
//     size_t n2 = strlen(src2);
//     size_t n3 = strlen(src3);
//     ft_memcpy(dest1, src1, n1);
//     printf("Test Case 1: Copying \"%s\" to dest1\n", src1);
//     printf("Result: %s\n", dest1);
//     ft_memcpy(dest2, src2, n2);
//     printf("\nTest Case 2: Copying \"%s\" to dest2\n", src2);
//     printf("Result: %s\n", dest2);
//     ft_memcpy(dest3, src3, n3);
//     printf("\nTest Case 3: Copying \"%s\" to dest3\n", src3);
//     printf("Result: %s\n", dest3);
//     return 0;
// }
