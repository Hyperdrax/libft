/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:47:54 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:23:56 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*allocated_memory;
	size_t	i;

	i = 0;
	allocated_memory = malloc(sizeof(char) * (len + 1));
	if (!allocated_memory)
		return (0);
	while (i < len)
	{
		allocated_memory[i] = s[start + i];
		i++;
	}
	allocated_memory[i] = '\0';
	return (allocated_memory);
}
// int main() {
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Testing ft_substr";
//     const char str3[] = "123456789";
//     char *result1 = ft_substr(str1, 7, 5);
//     printf("Test Case 1: Substring of \"%s\"
// starting at index 7 with length 5\n", str1);
//     printf("Result: \"%s\"\n", result1);
//     free(result1);
//     char *result2 = ft_substr(str2, 0, 7);
//     printf("\nTest Case 2: Substring of \"%s\"
// starting at index 0 with length 7\n", str2);
//     printf("Result: \"%s\"\n", result2);
//     free(result2);
//     char *result3 = ft_substr(str3, 2, 3);
//     printf("\nTest Case 3: Substring of \"%s\"
// starting at index 2 with length 3\n", str3);
//     printf("Result: \"%s\"\n", result3);
//     free(result3);
//     return 0;
// }
