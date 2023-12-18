/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 09:10:11 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/18 17:04:17 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	vars(size_t *i, int *j, int *start_word)
{
	*i = 0;
	*j = 0;
	*start_word = -1;
}

static int	count_words(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

static char	*make_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static void	*free_it(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	i;
	int		j;
	int		start_word;

	vars(&i, &j, &start_word);
	result = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start_word < 0)
			start_word = i;
		if ((s[i] == c || i == ft_strlen(s)) && start_word >= 0)
		{
			result[j] = make_word(s, start_word, i);
			if (!(result[j]))
				return (free_it(result, j));
			start_word = -1;
			j++;
		}
		i++;
	}
	return (result);
}
// int main() {
//     const char *input_string = "Hello,World,How,Are,You";
//     char delimiter = ',';
//     char **result = ft_split(input_string, delimiter);
//     if (result == NULL) {
//         printf("Memory allocation failed for result array.\n");
//         return 1;
//     }
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("Token %d: %s\n", i, result[i]);
//     }
//     free_tokens(result);
//     return 0;
// }
