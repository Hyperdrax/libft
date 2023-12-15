/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 09:43:04 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:21:02 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (s == NULL || f == NULL)
		return ;
	index = 0;
	while (*s)
	{
		f(index, s);
		s++;
		index++;
	}
}
// void print_index_and_char(unsigned int index, char *c) {
//     printf("Index: %u, Character: %c\n", index, *c);
// }
// int main() {
//     char str[] = "Hello, World!";
//     printf("Original String: %s\n", str);
//     ft_striteri(str, print_index_and_char);
//     return 0;
// }
