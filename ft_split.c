/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 09:10:11 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:18:03 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_tokens(const char *s, char c)
{
	int	count;
	int	in_token;

	count = 0;
	in_token = 0;
	while (*s)
	{
		if (*s == c)
			in_token = 0;
		else if (in_token == 0)
		{
			in_token = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static void	free_tokens(char **tokens)
{
	int	i;

	if (tokens)
	{
		i = 0;
		while (tokens[i] != 0)
		{
			free(tokens[i]);
			i++;
		}
		free(tokens);
	}
}

static char	*strndup(const char *s, size_t n)
{
	size_t	i;
	char	*result;

	result = (char *)malloc(n + 1);
	if (result)
	{
		i = 0;
		while (i < n)
		{
			result[i] = s[i];
			i++;
		}
		result[n] = '\0';
	}
	return (result);
}

static char	**split_tokens(char **result, const char *s, char c)
{
	int	token_length;
	int	token_index;

	token_index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		token_length = 0;
		while (s[token_length] != c && s[token_length] != '\0')
			token_length++;
		result[token_index] = strndup(s, token_length);
		if (result[token_index] == NULL)
		{
			free_tokens(result);
			return (NULL);
		}
		s += token_length;
		token_index++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		token_count;
	char	**result;

	if (s == NULL)
		return (NULL);
	token_count = count_tokens(s, c);
	result = (char **)malloc(sizeof(char *) * (token_count + 1));
	if (result == NULL)
		return (NULL);
	result = split_tokens(result, s, c);
	if (result == NULL)
		return (NULL);
	result[token_count] = NULL;
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
