/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:13:05 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/26 19:29:19 by jbarreir         ###   ########.fr       */
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

	s_len = ft_strlen(str);
	c_len = ft_strlen(charset);
	if (str == NULL || charset == NULL || str[0] == '\0' || charset[0] == '\0')
		return (NULL);
	arr = malloc((s_len * 2) + 1);
	if (arr == NULL)
		return (NULL);
	while (i < s_len)
	{
		:w


		
	return (arr);
}
