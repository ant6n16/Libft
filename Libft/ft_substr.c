/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:46:17 by antdelga          #+#    #+#             */
/*   Updated: 2022/11/30 21:39:45 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	index;
	size_t			tam;

	tam = ft_strlen(s);
	if (!s)
		return (NULL);
	dst = (char *) malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	index = 0;
	while (index < len && s[start + index] != '\0' && start < tam)
	{
		dst[index] = s[start + index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}
