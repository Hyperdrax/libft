/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:08:39 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 17:20:49 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	else
		return (0);
}
// int main() {
//     int test_cases[] = {65, 97, 48, 33, 126, 32, 127};
//     printf("Test cases:\n");
//     for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
//         int value = test_cases[i];
//         printf("Value: %d | isprint: %d\n", value, ft_isprint(value));
//     }
//     return 0;
// }
