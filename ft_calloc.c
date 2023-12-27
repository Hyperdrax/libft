/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:48:49 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/27 10:30:09 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	total_size;
	char	*char_str;
	void	*allocated_memory;

	total_size = nitems * size;
	if (nitems != 0 && total_size / nitems != size)
	{
		return (NULL);
	}
	allocated_memory = malloc(total_size);
	if (allocated_memory != NULL)
	{
		char_str = (char *)allocated_memory;
		while (total_size--)
			*char_str++ = (char)0;
	}
	return (allocated_memory);
}
// int main() {
//     size_t num_elements1 = 5;
//     size_t element_size1 = sizeof(int);
//     size_t num_elements2 = 3;
//     size_t element_size2 = sizeof(char);
//     int *arr1 = (int *)ft_calloc(num_elements1, element_size1);
//     if (arr1 != NULL) {
//         printf("Test Case 1:\n");
//         for (size_t i = 0; i < num_elements1; i++) {
//             printf("%d ", arr1[i]);
//         }
//         printf("\n");

//         free(arr1);
//     }
//     char *arr2 = (char *)ft_calloc(num_elements2, element_size2);
//     if (arr2 != NULL) {
//         printf("\nTest Case 2:\n");
//         for (size_t i = 0; i < num_elements2; i++) {
//             printf("%c ", arr2[i]);
//         }
//         printf("\n");

//         free(arr2);
//     }
//     return 0;
// }
