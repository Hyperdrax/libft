/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:02:16 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 18:04:26 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

// int main() {
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Testing ft_strchr";
//     const char str3[] = "123456789";
//     char search_char1 = 'o';
//     char search_char2 = 'f';
//     char search_char3 = '5';
//     char *result1 = ft_strchr(str1, search_char1);
//     printf("Test Case 1: Searching for '%c' in \"%s\"\n"
//, search_char1, str1);
//     printf("Result: %s\n", result1 ? result1 : "Not found");
//     char *result2 = ft_strchr(str2, search_char2);
//     printf("\nTest Case 2: Searching for '%c' in \"%s\"\n"
//, search_char2, str2);
//     printf("Result: %s\n", result2 ? result2 : "Not found");
//     char *result3 = ft_strchr(str3, search_char3);
//     printf("\nTest Case 3: Searching for '%c' in \"%s\"\n"
//, search_char3, str3);
//     printf("Result: %s\n", result3 ? result3 : "Not found");
//     return 0;
// }
