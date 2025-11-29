/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:55:58 by cmelero-          #+#    #+#             */
/*   Updated: 2025/11/16 11:41:29 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show_array(char arr[6][6]);

void	printaf(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return ;
}

void	printn(char c)
{
	char	c2;

	c2 = c + '0';
	write (1, &c2, 1);
	return ;
}

// Create arrays with all 0s
void	empty_array(char arr[6][6])
{
	int	i;

	i = 0;
	while (i < 6)
	{
		arr[i][0] = '0';
		arr[i][1] = '0';
		arr[i][2] = '0';
		arr[i][3] = '0';
		arr[i][4] = '0';
		arr[i][5] = '0';
		i++;
	}
	return ;
}

// Muestra la matriz. Sólo debe ser llamada para mostrar la buena.
void	show_array(char arr[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			write (1, &arr[i][j], 1);
			if (j != 4)
			{
				write (1, " ", 1);
			}
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
