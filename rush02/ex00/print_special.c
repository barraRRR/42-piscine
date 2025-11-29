/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_special.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:08:33 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/23 23:21:57 by pmieres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*       this file groups functions that carry out special scenarios
 *       like direct coincidences in the dictionary or working with
 *       powers of ten.
 *       -----------------------------------------------------------
 */

#include "lib.h"
#include <unistd.h>

int	print_coincidence(char *n, t_dic *dic, int size)
{
	int		i;
	int		check;

	i = 0;
	check = 0;
	while (i < size)
	{
		if (ft_strcmp(n, dic[i].num) == 0)
		{
			ft_putstr(dic[i].wrd);
			return (1);
		}
		i++;
	}
	return (0);
}

void	cal_power(t_dic *dic, int pw, int size)
{
	int		len;
	char	n_arr[1000];

	if (pw <= 0)
		return ;
	n_arr[0] = '1';
	n_arr[1] = '\0';
	while (pw > 0)
	{
		len = ft_strlen(n_arr);
		n_arr[len] = '0';
		n_arr[1 + len] = '0';
		n_arr[2 + len] = '0';
		n_arr[3 + len] = '\0';
		pw--;
	}
	print_power(n_arr, dic, size);
}

void	print_power(char n_arr[1000], t_dic *dic, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (ft_strcmp(n_arr, dic[i].num) == 0)
		{
			ft_putstr(dic[i].wrd);
			write(1, " ", 1);
			break ;
		}
		i++;
	}
}

void	print_three(char *n, t_dic *dic, int size)
{
	if (n[0] == '0' && n[1] == '0' && n[2] != '0')
		print_num(n[2], dic, size);
	else if (n[0] == '0' && n[1] != '0')
		print_pair(n[1], n[2], dic, size);
	else if (n[1] == '0' && n[2] == '0')
	{
		print_hundred(n[0], dic, size);
		if (n[2] != '0')
			print_num(n[2], dic, size);
	}
	else
	{
		print_hundred(n[0], dic, size);
		ft_putstr(" ");
		print_pair(n[1], n[2], dic, size);
	}
}
