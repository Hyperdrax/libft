/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:26:42 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/18 17:28:50 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
// int main() {
//     char char1 = 'A';
//     char char2 = 'z';
//     char char3 = '1';
//     int result1 = ft_tolower(char1);
//     printf("Test Case 1: Converting '%c' to lowercase\n", char1);
//     printf("Result: '%c'\n", result1);
//     int result2 = ft_tolower(char2);
//     printf("\nTest Case 2: Converting '%c' to lowercase\n", char2);
//     printf("Result: '%c'\n", result2);
//     int result3 = ft_tolower(char3);
//     printf("\nTest Case 3: Converting '%c' to lowercase\n", char3);
//     printf("Result: '%c'\n", result3);
//     return 0;
// }
