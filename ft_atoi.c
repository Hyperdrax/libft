/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:41:06 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:09:38 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	multiplier;
	int	result;

	i = 0;
	multiplier = 1;
	result = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '-')
			multiplier = -1;
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		else
			return (result * multiplier);
	}
	return (result * multiplier);
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
