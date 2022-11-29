/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:36:43 by antdelga          #+#    #+#             */
/*   Updated: 2022/11/29 19:55:24 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		l1;
	size_t		i1;
	size_t		i2;

	l1 = ft_strlen(needle);
	if (!l1)
		return ((char *)haystack);
	i1 = 0;
	i2 = 0;
	while (haystack[i1] != '\0' && (i1 + i2 < len))
	{
		while ((haystack[i1 + i2] == needle[i2]) && \
		(haystack[i1 + i2] != '\0') && (i1 + i2 < len))
			i2 += 1;
		if (needle[i2] == '\0')
			return ((char *)haystack + i1);
		i2 = 0;
		i1++;
	}
	return (0);
}
