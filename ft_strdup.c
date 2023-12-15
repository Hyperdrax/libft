/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:10:11 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:20:40 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*duplicate;
	size_t	length;

	length = ft_strlen(source) + 1;
	duplicate = (char *)malloc(length);
	if (source == NULL)
		return (NULL);
	if (duplicate != NULL)
		ft_strlcpy(duplicate, source, length);
	return (duplicate);
}
// int main() {
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Testing ft_strdup";
//     const char str3[] = "";
//     char *result1 = ft_strdup(str1);
//     printf("Test Case 1: Original: \"%s\" | Duplicate: \"%s\"\n"
//, str1, result1);
//     free(result1);
//     char *result2 = ft_strdup(str2);
//     printf("\nTest Case 2: Original: \"%s\" | Duplicate: \"%s\"\n"
//, str2, result2);
//     free(result2); 
//     char *result3 = ft_strdup(str3);
//     printf("\nTest Case 3: Original: \"%s\" | Duplicate: \"%s\"\n"
//, str3, result3);
//     free(result3); 
//     return 0;
// }
