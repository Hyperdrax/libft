/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:11:17 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/18 17:16:31 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
// int main() {
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Testing ft_strrchr";
//     const char str3[] = "123456789";
//     char *result1 = ft_strrchr(str1, 'o');
//     printf("Test Case 1: Searching for 'o' in \"%s\"\n", str1);
//     printf("Result: %s\n", result1 ? result1 : "Not found");
//     char *result2 = ft_strrchr(str2, 'r');
//     printf("\nTest Case 2: Searching for 'r' in \"%s\"\n", str2);
//     printf("Result: %s\n", result2 ? result2 : "Not found");
//     char *result3 = ft_strrchr(str3, '0');
//     printf("\nTest Case 3: Searching for '0' in \"%s\"\n", str3);
//     printf("Result: %s\n", result3 ? result3 : "Not found");
//     char *result4 = ft_strrchr(str3, 'a');
//     printf("\nTest Case 4: Searching for 'a' in \"%s\"\n", str3);
//     printf("Result: %s\n", result4 ? result4 : "Not found");
//     return 0;
// }
