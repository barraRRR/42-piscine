/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:53:43 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/26 13:38:46 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
void	ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
int		error_check(int size, char *arr);

/*
int	main(void)
{
	char	*strs[9] = {
		"hola",
		"que",
		"tal",
		"estas",
		"me",
		"voy",
		"hasta",
		"mañana",
		"kjvkfjahgkashfiuuihaiuogheriaghieruhgiuhfivfakljvkldfjhgifhgifuhg"
	};
	char	*sep = "+-";
	char	*new = ft_strjoin(9, strs, sep);
	printf("%s\n", new);
	free(new);
	return (0);
}
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		total_len;

	arr = NULL;
	if (!error_check(size, arr))
		return (arr);
	i = 0;
	total_len = 0;
	while (i < size)
		total_len = total_len + (ft_strlen(sep) + ft_strlen(strs[i++]));
	arr = malloc(total_len + 1);
	if (arr == NULL)
		return (NULL);
	arr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}

int	error_check(int size, char *arr)
{
	if (size == 0)
	{
		arr = malloc(1);
		arr[0] = '\0';
		return (0);
	}
	else
		return (1);
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
