/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:13:49 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 17:02:51 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	ft_memset(void *str, int c, size_t n)
{
	char	*char_str;

	char_str = (char *)str;
	while (n--)
		*char_str++ = (char)c;
}
// int main() {
//     char dest1[20];
//     char dest2[20];
//     char dest3[20];
//     int fill_char1 = 'X';
//     int fill_char2 = '$';
//     int fill_char3 = '9';
//     size_t n1 = 10;
//     size_t n2 = 5;
//     size_t n3 = 8;
//     ft_memset(dest1, fill_char1, n1);
//     printf("Test Case 1: Filling dest1 with '%c'\n", fill_char1);
//     printf("Result: %s\n", dest1);
//     ft_memset(dest2, fill_char2, n2);
//     printf("\nTest Case 2: Filling dest2 with '%c'\n", fill_char2);
//     printf("Result: %s\n", dest2);
//     ft_memset(dest3, fill_char3, n3);
//     printf("\nTest Case 3: Filling dest3 with '%c'\n", fill_char3);
//     printf("Result: %s\n", dest3);
//     return 0;
// }
