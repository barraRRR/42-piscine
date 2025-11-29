/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diccionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmieres- <pmieres-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:13:19 by pmieres-          #+#    #+#             */
/*   Updated: 2025/11/23 23:28:35 by pmieres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_fill_wrd(int *st, int *end, char *buff, char *numbers)
{
	int	j;

	j = 0;
	while (j < (*end - *st + 1))
	{
		numbers[j] = buff[*st + j];
		j++;
	}
	numbers[j] = '\0';
}

void	ft_fill_num(int *st, int *end, char *buff, char *numbers)
{
	int	j;

	j = 0;
	while (j < (*end - *st + 1))
	{
		numbers[j] = buff[*st + j];
		j++;
	}
	numbers[j] = '\0';
}

int	ft_extract_num(int *st, char *buff, int *end, int *temp)
{
	*st = *temp;
	*end = *temp;
	while (buff[*st] == 32)
		*st = *st + 1;
	if (buff[*st] == '+')
		*st = *st + 1;
	*end = *st;
	while (buff[*end] >= '0' && buff[*end] <= '9')
		*end = *end + 1;
	*temp = *end;
	*end = *end - 1;
	while (buff[*temp] == 32)
		*temp = *temp + 1;
	if (buff[*temp] != ':')
	{
		write(2, "Dict Error1\n", 12);
		return (1);
	}
	else
	{
		*temp = *temp + 1;
		while (buff[*temp] == ' ')
			*temp = *temp + 1;
	}
	return (0);
}

int	ft_extract_wrd(int *st, char *buff, int *end, int *temp)
{
	*st = *temp;
	*end = *temp;
	while (buff[*temp] > 32 && buff[*temp] <= 126)
		*temp = *temp + 1;
	*end = *temp - 1;
	while (buff[*temp] == 32)
		*temp = *temp + 1;
	if (buff[*temp] != '\n')
	{
		write(2, "Dict Error2\n", 12);
		return (1);
	}
	else
	{
		while (buff[*temp] == '\n')
			*temp = *temp + 1;
	}
	return (0);
}

t_dic	*ft_memory(char *file)
{
	char	buff[1024];
	t_dic	*numbers;
	int		i;
	int		a[3];	

	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	i = 0;
	if (ft_file(file, buff))
		return (0);
	numbers = malloc(sizeof(t_dic) * ft_lines(buff));
	while (i < ft_lines(buff))
	{
		if (ft_extract_num(&a[0], buff, &a[1], &a[2]))
			return (0);
		numbers[i].num = (char *) malloc(sizeof(char) * (a[1] - a[0] + 2));
		ft_fill_num(&a[0], &a[1], buff, numbers[i].num);
		if (ft_extract_wrd(&a[0], buff, &a[1], &a[2]))
			return (0);
		numbers[i].wrd = malloc(sizeof(char) * (a[1] - a[0] + 2));
		ft_fill_wrd(&a[0], &a[1], buff, numbers[i].wrd);
		i++;
	}
	return (numbers);
}
