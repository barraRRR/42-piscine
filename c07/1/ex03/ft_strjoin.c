/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:53:43 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/24 18:11:22 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
void	ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

/*
int	main(void)
{
	char	*strs[10] = {
		"hola",
		"que",
		"tal",
		"estas"
	};
	char	*sep = "+-";
	char	*new = ft_strjoin(4, strs, sep);
	printf("%s\n", new);
	free(new);
	return (0);
}
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;

	i = 0;
	arr = malloc((sizeof(strs) * size) + (sizeof(sep) * (size)));
	if (arr == NULL)
		return (NULL);
	if (size == 0)
		return (arr);
	arr[0] = '\0';
	while (size >= 1)
	{
		ft_strcat(arr, strs[i]);
		if (size > 1)
			ft_strcat(arr, sep);
		i++;
		size--;
	}
	return (arr);
}

void	ft_strcat(char *dest, char *src)
{
	int		s_cnt;
	int		d_cnt;

	d_cnt = 0;
	s_cnt = 0;
	while (dest[d_cnt])
		d_cnt++;
	while (src[s_cnt])
	{
		dest[d_cnt + s_cnt] = src[s_cnt];
		s_cnt++;
	}
	dest[d_cnt + s_cnt] = '\0';
}

int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (!(str[count] == '\0'))
	{
		count++;
	}
	return (count);
}
