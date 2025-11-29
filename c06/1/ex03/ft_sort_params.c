/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 09:13:40 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/20 12:10:02 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_strcpy(char *dest, char *src);
void	tmp_arr(int argc, char *argv[], char t[10000][100]);
void	sort_arr(int argc, char t_arr[10000][100]);

int	main(int argc, char *argv[])
{
	char	t_arr[10000][100];
	int		i;
	int		j;

	tmp_arr(argc, argv, t_arr);
	sort_arr(argc, t_arr);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (t_arr[i][j])
		{
			write(1, &t_arr[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		cnt;

	cnt = 0;
	while (s1[cnt] && s2[cnt])
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		cnt++;
	}
	return (s1[cnt] - s2[cnt]);
}

void	ft_strcpy(char *dest, char *src)
{
	int		count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
}

void	tmp_arr(int argc, char *argv[], char t[10000][100])
{
	int		i;

	i = 0;
	while (i < argc)
	{
		ft_strcpy(t[i], argv[i]);
		i++;
	}
}

void	sort_arr(int argc, char t_arr[10000][100])
{
	int		i;
	int		j;
	char	t[100];
	int		swap;

	i = 1;
	swap = 1;
	while (i < argc || swap)
	{
		swap = 0;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(t_arr[i], t_arr[j]) > 0)
			{
				ft_strcpy(t, t_arr[i]);
				ft_strcpy(t_arr[i], t_arr[j]);
				ft_strcpy(t_arr[j], t);
				swap = 1;
			}
			j++;
		}
		i++;
	}
}
