/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:05:46 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/07 14:04:12 by fhensel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	getlen(int value)
{
	int	l;

	l = 1;
	if (value < 0)
	{
		l++;
		value = -value;
	}
	while (value > 9)
	{
		l++;
		value /= 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*allocated_memory;
	const char	*digits = "0123456789";

	len = getlen(n);
	allocated_memory = malloc(sizeof(char) * (len + 1));
	if (!allocated_memory)
		return (0);
	allocated_memory[len] = '\0';
	if (n == 0)
		allocated_memory[0] = '0';
	if (n < 0)
		allocated_memory[0] = '-';
	while (n)
	{
		len--;
		if (n > 0)
			allocated_memory[len] = digits[n % 10];
		else
			allocated_memory[len] = digits[n % 10 * -1];
		n /= 10;
	}
	return (allocated_memory);
}
// int main() {
//     int test_cases[] = {123, -456, 0, 987654321, -123456789, 42};
//     for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
//         int value = test_cases[i];
//         char *result = ft_itoa(value);
//         printf("Integer: %d | String: %s\n", value, result);
//         free(result);
//     }
//     return 0;
// }
