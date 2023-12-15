/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:17:00 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:21:22 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>

static char	check(const char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	return (ft_strlen(s));
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total_length;
	char	*result;

	len1 = check(s1);
	len2 = check(s2);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	total_length = len1 + len2;
	result = (char *)malloc(total_length + 1);
	if (result == NULL)
		return (NULL);
	if (s1 != NULL)
		ft_strlcpy(result, s1, total_length + 1);
	else
		result[0] = '\0';
	if (s2 != NULL)
		ft_strlcat(result, s2, total_length + 1);
	return (result);
}
// int main() {
//     const char str1[] = "Hello, ";
//     const char str2[] = "World!";
//     const char str3[] = "";
//     const char *str4 = NULL;
//     const char *str5 = NULL;
//     char *result1 = ft_strjoin(str1, str2);
//     printf("Test Case 1: Concatenating \"%s\" and \"%s\"\n", str1, str2);
//     printf("Result: \"%s\"\n", result1);
//     free(result1);
//     char *result2 = ft_strjoin(str3, str2);
//     printf("\nTest Case 2: Concatenating \"%s\" and \"%s\"\n", str3, str2);
//     printf("Result: \"%s\"\n", result2);
//     free(result2);
//     char *result3 = ft_strjoin(str4, str2);
//     printf("\nTest Case 3: Concatenating NULL and \"%s\"\n", str2);
//     printf("Result: \"%s\"\n", result3);
//     free(result3);
//     char *result4 = ft_strjoin(str5, str4);
//     printf("\nTest Case 4: Concatenating NULL and NULL\n");
//     printf("Result: \"%s\"\n", result4);
//     free(result4);
//     return 0;
// }
