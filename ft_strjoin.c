/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:17:00 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:21:22 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	check(const char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	return (ft_strlen(s));
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total_length;
	char	*result;

	len1 = check(s1);
	len2 = check(s2);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	total_length = len1 + len2;
	result = (char *)malloc(total_length + 1);
	if (result == NULL)
		return (NULL);
	if (s1 != NULL)
		ft_strlcpy(result, s1, total_length + 1);
	else
		result[0] = '\0';
	if (s2 != NULL)
		ft_strlcat(result, s2, total_length + 1);
	return (result);
}
