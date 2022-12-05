/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:01:20 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/05 16:03:50 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c, size_t j)
{
	size_t	i;
	size_t	words;

	i = 0;
	while (s[i] == c)
		i++;
	while (s[j] == c)
	{
		j--;
	}
	words = 0;
	while (s[i] != '\0' && i < (j))
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	if (words == 0)
		return (words);
	return (++words);
}

char	**fill_table(char **tabla, size_t words, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
	len = 0;
	if (words == 1)
		tabla[0] = ft_substr(s, 0, ft_strlen(s));
	while (i < words && words != 1)
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		while (s[start] != '\0' && s[start] != c)
		{
			start++;
			len++;
		}
		tabla[i] = ft_substr(s, start - len, len);
		len = 0;
		i++;
	}
	tabla[words] = 0;
	return (tabla);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**tabla;

	words = count_words(s, c, (ft_strlen(s) - 1));
	tabla = (char **) malloc(sizeof(char *) * (words + 1));
	if (tabla == NULL)
		return (NULL);
	tabla = fill_table(tabla, words, s, c);
	return (tabla);
}

/*
int	main(void)
{
	char	**array;
	char	*s = "Hola que tal";
	char	c = ' ';
	size_t	i;


	// array = ft_split(s, c);
	// i = 0;
	// while (i < count_words(s, c, (ft_strlen(s) - 1)))
	// {
	// 	printf("%s,", array[i]);
	// 	i++;
	// }
	// printf("%s\n", array[i]);
	return (0);
}
*/
