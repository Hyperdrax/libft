/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:20:55 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:23:06 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_count;

	i = 0;
	little_count = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[little_count])
		{
			little_count++;
			if (little[little_count] == '\0')
				return ((char *)(big + i - little_count + 1));
		}
		else
			little_count = 0;
		i++;
	}
	return (0);
}
// int main() {
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Testing ft_strnstr";
//     const char str3[] = "123456789";
//     char *result1 = ft_strnstr(str1, "World", 13);
//     printf("Test Case 1: Searching for \"World\" in \"%s\"
// up to 13 characters\n", str1);
//     printf("Result: %s\n", result1 ? result1 : "Not found");
//     char *result2 = ft_strnstr(str2, "ft_str", 15);
//     printf("\nTest Case 2: Searching for \"ft_str\" in \"%s\"
// up to 15 characters\n", str2);
//     printf("Result: %s\n", result2 ? result2 : "Not found");
//     char *result3 = ft_strnstr(str3, "7890", 10);
//     printf("\nTest Case 3: Searching for \"7890\" in \"%s\"
// up to 10 characters\n", str3);
//     printf("Result: %s\n", result3 ? result3 : "Not found");
//     return 0;
// }
