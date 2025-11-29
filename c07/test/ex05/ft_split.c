/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 09:43:23 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/27 11:37:30 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;
	int		s_len;
	int		c_len;
	int		needle;

	if (str == NULL || charset == NULL || str[0] == '\0' || charset[0] == '\0')
		return (NULL);
	s_len = ft_strlen(str);
	c_len = ft_strlen(charset);
	arr = malloc((s_len * 2) + 1);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		if (str[i] == charset[0])
		{
			needle = 1;
			j = 0;
			while (charset[j])			
			{
				if (str[i + j] != charset[j])
				{
					needle = 0;
					break ;
				}
				j++;
			}
			if (!needle)
				arr[k] = str



	return (arr);
}

