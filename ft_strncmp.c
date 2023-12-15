/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:20:04 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 17:47:26 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_strncmp(const char *s, const char *w, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (i < n - 1 && s[i] != '\0' && w[i] != '\0' && s[i] == w[i])
			i++;
		return ((unsigned char)s[i] - (unsigned char)w[i]);
	}
	else
		return (0);
}
// int main() {
//     const char str1a[] = "Hello, World!";
//     const char str1b[] = "Hello, Universe!";
//     const char str2a[] = "Testing ft_strncmp";
//     const char str2b[] = "Testing ft_strcmp";
//     const char str3a[] = "12345";
//     const char str3b[] = "123456";
//     int result1 = ft_strncmp(str1a, str1b, 7);
//     printf("Test Case 1: Comparing \"%s\" and \"%s\" up to 7 characters\n"
//, str1a, str1b);
//     printf("Result: %d\n", result1);
//     int result2 = ft_strncmp(str2a, str2b, 10);
//     printf("\nTest Case 2: Comparing \"%s\" and \"%s\" up to 10 characters\n"
//, str2a, str2b);
//     printf("Result: %d\n", result2);
//     int result3 = ft_strncmp(str3a, str3b, 5);
//     printf("\nTest Case 3: Comparing \"%s\" and \"%s\" up to 5 characters\n"
//, str3a, str3b);
//     printf("Result: %d\n", result3);
//     return 0;
// }
