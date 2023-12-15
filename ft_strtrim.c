/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:53:59 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 17:16:51 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != NULL || set != NULL)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
// int main() {
//     const char str1[] = "   Hello, World!   ";
//     const char set1[] = " ";
//     const char str2[] = "Testing ft_strtrim";
//     const char set2[] = "Testing";
//     const char str3[] = "   123456789   ";
//     const char set3[] = "12345";
//     char *result1 = ft_strtrim(str1, set1);
//     printf("Test Case 1: Trimming \"%s\" with set \"%s\"\n", str1, set1);
//     printf("Result: \"%s\"\n", result1);
//     free(result1);
//     char *result2 = ft_strtrim(str2, set2);
//     printf("\nTest Case 2: Trimming \"%s\" with set \"%s\"\n", str2, set2);
//     printf("Result: \"%s\"\n", result2);
//     free(result2);
//     char *result3 = ft_strtrim(str3, set3);
//     printf("\nTest Case 3: Trimming \"%s\" with set \"%s\"\n", str3, set3);
//     printf("Result: \"%s\"\n", result3);
//     free(result3);
//     return 0;
// }
