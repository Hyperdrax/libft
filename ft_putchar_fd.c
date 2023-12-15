/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:37:04 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:17:30 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main() {
//     char character = 'A';
//     ft_putchar_fd(character, 1);
//     ft_putchar_fd(character, 2);
//     return 0;
// }
