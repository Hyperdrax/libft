/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:05:56 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/07 13:57:53 by fhensel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	else
		return (0);
}
// int main() {
//     int test_cases[] = {65, 97, 48, 127, 128, -1, 0};
//     printf("Test cases:\n");
//     for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
//         int value = test_cases[i];
//         printf("Value: %d | isascii: %d\n", value, ft_isascii(value));
//     }
//     return 0;
// }
