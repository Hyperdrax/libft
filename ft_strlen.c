/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:16:02 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:22:12 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main() {
//     const char str1[] = "Hello, World!";
//     const char str2[] = "Testing ft_strlen";
//     const char str3[] = "";
//     size_t result1 = ft_strlen(str1);
//     printf("Test Case 1: Length of \"%s\" is %zu\n", str1, result1);
//     size_t result2 = ft_strlen(str2);
//     printf("\nTest Case 2: Length of \"%s\" is %zu\n", str2, result2);
//     size_t result3 = ft_strlen(str3);
//     printf("\nTest Case 3: Length of \"%s\" is %zu\n", str3, result3);
//     return 0;
// }
