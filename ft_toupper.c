/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:27:25 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:06:01 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
// int main() {
//     char char1 = 'a';
//     char char2 = 'Z';
//     char char3 = '1';
//     int result1 = ft_toupper(char1);
//     printf("Test Case 1: Converting '%c' to uppercase\n", char1);
//     printf("Result: '%c'\n", result1);
//     int result2 = ft_toupper(char2);
//     printf("\nTest Case 2: Converting '%c' to uppercase\n", char2);
//     printf("Result: '%c'\n", result2);
//     int result3 = ft_toupper(char3);
//     printf("\nTest Case 3: Converting '%c' to uppercase\n", char3);
//     printf("Result: '%c'\n", result3);
//     return 0;
// }
