/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:41:06 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/18 14:39:53 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}


// int main() {
//     const char *test_cases[] = {
//         "123",
//         "-456",
//         "   789",
//         "+321",
//         "  -987",
//         "0",
//         "  42abc",
//         "   -123xyz",
//         "   +999",
//         "   2147483647",  // INT_MAX
//         "   -2147483648", // INT_MIN
//         "   2147483648",  // Out of range
//         "   -2147483649", // Out of range
//     };
//     int i;
//     for (i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
// 	{
//         const char *test_case = test_cases[i];
//         int result = ft_atoi(test_case);
//         printf("String: %-15s | Result: %d\n", test_case, result);
//     }
// }
