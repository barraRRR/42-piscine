/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 09:43:23 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/02 11:28:31 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	is_space(char c, char *charset)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*alloc_and_chop(char *str, char *charset)
{
	size_t	i;
	size_t	j;
	char	*word;

	i = 0;
	j = 0;
	while (str[i] && !is_space(str[i], charset))
		i++;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	while (str[j] && !is_space(str[j], charset))
	{
		word[j] = str[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

void	free_partial(char **arr, int filled)
{
	int	i;

	i = 0;
	while (i < filled)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**arr_filler(char **arr, char *str, char *charset, int words)
{
	int		i;
	int		filled;

	i = 0;
	filled = 0;
	while (str && str[i] && filled < words)
	{
		if (!is_space(str[i], charset))
		{
			arr[filled] = alloc_and_chop(str + i, charset);
			if (!arr[filled])
			{
				free_partial(arr, filled);
				return (NULL);
			}
			filled++;
			while (!is_space(str[i], charset))
				i++;
		}
		else
			i++;
	}
	arr[words] = NULL;
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		words;
	int		i;

	if (!str || str[0] == '\0')
		return (NULL);
	words = 0;
	i = 0;
	while (str && str[i])
	{
		if (!is_space(str[i], charset))
		{
			words++;
			while (!is_space(str[i], charset))
				i++;
		}
		else
			i++;
	}
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	arr = arr_filler(arr, str, charset, words);
	return (arr);
}
