/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:20:55 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/18 15:50:18 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *) big + i);
		}
		i++;
		j = 0;
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
