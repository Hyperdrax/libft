/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:47:54 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/18 15:13:39 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
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
