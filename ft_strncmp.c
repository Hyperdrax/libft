/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhensel <fhensel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:20:04 by fhensel           #+#    #+#             */
/*   Updated: 2023/12/15 17:47:26 by fhensel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s, const char *w, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (i < n - 1 && s[i] != '\0' && w[i] != '\0' && s[i] == w[i])
			i++;
		return ((unsigned char)s[i] - (unsigned char)w[i]);
	}
	else
		return (0);
}
