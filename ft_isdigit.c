/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:07:38 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/07 13:57:53 by fhensel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	else
		return (0);
}
// int main() {
//     char test_cases[] = {'0', '5', '9', 'a', '#', ' '};
//     printf("Test cases:\n");
//     for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
//         char c = test_cases[i];
//         printf("Character: %c | isdigit: %d\n", c, ft_isdigit(c));
//     }
//     return 0;
// }
