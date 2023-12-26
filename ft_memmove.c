/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:44:33 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/26 18:45:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copyforward(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	s = (const char *)src;
	d = (char *)dst;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*d;
	const char	*s;

	i = 0;
	s = (const char *)src;
	d = (char *)dst;
	if (dst == src || len == 0)
		return (dst);
	if (d < s && d + len > s)
		copyforward(dst, src, len);
	else if (s < d && s + len > d)
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
		copyforward(dst, src, len);
	return (dst);
}
// int main() {
//     char dest1[20];
//     char dest2[20];
//     char dest3[20];
//     const char src1[] = "Hello, World!";
//     const char src2[] = "Testing ft_memmove";
//     const char src3[] = "123456789";
//     size_t n1 = strlen(src1);
//     size_t n2 = strlen(src2);
//     size_t n3 = strlen(src3);
//     ft_memmove(dest1, src1, n1);
//     printf("Test Case 1: Moving \"%s\" to dest1\n", src1);
//     printf("Result: %s\n", dest1);
//     ft_memmove(dest2, src2, n2);
//     printf("\nTest Case 2: Moving \"%s\" to dest2\n", src2);
//     printf("Result: %s\n", dest2);
//     ft_memmove(dest3, src3, n3);
//     printf("\nTest Case 3: Moving \"%s\" to dest3\n", src3);
//     printf("Result: %s\n", dest3);
//     return 0;
// }
