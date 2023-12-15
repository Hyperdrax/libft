/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:59:01 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:11:12 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int argument)
{
	if (argument >= 'A' && argument <= 'Z')
		return (1);
	else if (argument >= 'a' && argument <= 'z')
		return (1);
	else
		return (0);
}
// int main() {
//     char test_cases[] = {'a', '5', '#', 'Z', '9', '!', ' '};

//     printf("Test cases:\n");
//     for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
//         char c = test_cases[i];
//         printf("Character: %c | isalpha: %d\n", c, ft_isalpha(c));
//     }

//     return 0;
// }
