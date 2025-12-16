/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:42:48 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/16 21:46:54 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_print_tail(int fd, int n)
{
	char	*buf;
	char	c;
	int		total;
	int		i;
	int		bytes;

	buf = malloc(n);
	if (!buf)
		return (0);
	total = 0;
	i = 0;
	while ((bytes = read(fd, &c, 1)) > 0)
	{
		buf[i] = c;
		i = (i + 1) % n;
		total++;
	}
	if (bytes < 0)
	{
		free(buf);
		return (0);
	}
	if (total < n)
		write(1, buf, total);
	else
	{
		write(1, buf + i, n - i);
		write(1, buf, i);
	}
	free(buf);
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	int		n;

	if (argc < 4 || argv[1][0] != '-' || argv[1][1] != 'c')
	{
		ft_putstr("Error. Requieres -c and number of bytes.\n");
		return (1);
	}
	i = 3;
	n = ft_atoi(argv[2]);	
	while (i < argc)
	{
		if ((fd = open(argv[i], O_RDONLY)) < 0)
		{
			ft_puterr(argv[0], argv[i]);
			return (1);
		}
		if (argc > 4)
		{
			ft_putstr("==> ");
			ft_putstr(argv[i]);
			ft_putstr(" <==\n");
		}
		if (!ft_print_tail(fd, n))
		{
			ft_putstr("Error.\n");
			return (1);
		}
		write(1, "\n", 1);
		close(fd);
		i++;
	}
	return (0);
}
