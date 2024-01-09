/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:10:11 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 16:20:40 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*duplicate;
	size_t	length;

	length = ft_strlen(source) + 1;
	duplicate = (char *)malloc(length);
	if (source == NULL)
		return (NULL);
	if (duplicate != NULL)
		ft_strlcpy(duplicate, source, length);
	return (duplicate);
}
