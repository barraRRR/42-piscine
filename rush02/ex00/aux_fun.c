/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_fun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmieres- <pmieres-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:32:44 by pmieres-          #+#    #+#             */
/*   Updated: 2025/11/23 23:25:43 by pmieres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int	ft_lines(char *buff)
{
	int	i;
	int	lines;

	lines = 0;
	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
		{
			lines++;
			i++;
			while (buff[i] == '\n')
				i++;
		}
		i++;
	}
	return (lines);
}

int	ft_file(char *file, char *buff)
{
	int		fd;
	ssize_t	bytes;

	fd = open (file, O_RDONLY);
	if (fd == -1)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	bytes = read(fd, buff, 1024);
	if (bytes == -1)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	buff[bytes] = '\0';
	close(fd);
	return (0);
}

void	ft_free_dic(t_dic *matrix, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		free(matrix[i].num);
		free(matrix[i].wrd);
		i++;
	}
	free(matrix);
}
/*
void    ft_print_dic(t_dic *matrix,int l)
{
    int i;
    int j;
    char c;

    i = 0;
    j = 0;
    while (i <  l)
    {
        j = 0;
        while (matrix[i].num[j])
        {
            c = matrix[i].num[j];
            write(1, &c, 1);
            j++;
        }
        j = 0;
        while (matrix[i].wrd[j])
        {
            c = matrix[i].wrd[j];
            write(1, &c, 1);
            j++;
        }

        write(1, "\n", 1);
        i++;
    }
}
*/
