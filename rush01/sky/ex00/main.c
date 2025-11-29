/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 08:42:40 by cmelero-          #+#    #+#             */
/*   Updated: 2025/11/16 11:49:42 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show_array(char arr[6][6]);
int		fill_ar2(int cont, int a, int b, char ar[25][6]);
void	fill_ar(char ar[25][6]);
void	printaf(char *str);
void	printn(char c);
void	empty_array(char arr[6][6]);
int		final_finder(char arr[6][6]);

// Gen 1st array with 0s and params in blorders
void	gen_array(char inputparam[], char arr[6][6])
{
	int	n;
	int	i;

	empty_array (arr);
	n = 0;
	i = 1;
	while (n <= 7)
	{
		arr[0][i] = inputparam[n];
		arr[5][i] = inputparam[n + 8];
		arr[i][0] = inputparam[n + 16];
		arr[i][5] = inputparam[n + 24];
		n += 2;
		i++;
	}
	n = 0;
	return ;
}

// Utilized by dowhilek  
void	i_line(char arr[6][6], int n, char arr2[6])
{
	arr[n][1] = arr2[1];
	arr[n][2] = arr2[2];
	arr[n][3] = arr2[3];
	arr[n][4] = arr2[4];
	return ;
}

// Ulitized by brute_force. THIS IS THE ONE THAT CALL Pathfinder for EVERY ARRAY
int	dowhilek(char arr[6][6], char ar[25][6], int i, int j)
{
	int	k;
	int	l;

	k = 1;
	l = 1;
	k = 1;
	while (k < 25)
	{
		l = 1;
		while (l < 25)
		{
			i_line (arr, 1, ar[i]);
			i_line (arr, 2, ar[j]);
			i_line (arr, 3, ar[k]);
			i_line (arr, 4, ar[l]);
			l++;
			if (final_finder (arr) == 0)
			{
				show_array(arr);
				return (0);
			}
		}
		k++;
	}
	return (1);
}

//Check all combinations of arrays and check them
int	brute_force(char arr[6][6], char ar[25][6])
{
	int	i;
	int	j;
	int	salida;

	salida = 1;
	i = 1;
	j = 1;
	while (i < 25 && salida != 0)
	{
		j = 1;
		while (j < 25 && salida != 0)
		{
			salida = dowhilek(arr, ar, i, j);
			j++;
		}
		i++;
	}
	return (salida);
}

int	main(int argc, char *argv[])
{
	char	ar[25][6];
	char	arr[6][6];
	int		salida;

	if (argc != 2)
		salida = 1;
	else if (argv[1][31] != '\0')
		salida = 1;
	else
	{
		fill_ar (ar);
		gen_array(argv[1], arr);
		fill_ar (ar);
		salida = brute_force(arr, ar);
	}
	if (salida != 0)
	{
		write (1, "Error\n", 6);
	}
	return (0);
}
