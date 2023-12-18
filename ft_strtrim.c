/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:53:59 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/18 17:22:34 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;
	return (new_str(s1, i, j - (i - 1)));
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
