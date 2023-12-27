/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:59:01 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/27 10:30:18 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if (ft_isdigit(argument) != 0)
		return (1);
	else if (ft_isalpha(argument) != 0)
		return (1);
	else
		return (0);
}
// int main() {
//     char test_cases[] = {'a', '5', '#', 'Z', '9', '!', ' '};
//     printf("Test cases:\n");
//     for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
//         char c = test_cases[i];
//         printf("Character: %c | isalnum: %d\n", c, ft_isalnum(c));
//     }
//     return 0;
// }
