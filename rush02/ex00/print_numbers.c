/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:10:28 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/23 21:28:14 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*       this file groups functions which mission is to print chunks
 *       of numbers
 *       -----------------------------------------------------------
 */

#include "lib.h"
#include <unistd.h>

void	print_pair(char pair1, char pair2, t_dic *dic, int size)
{
	int		i;
	char	a_pair[3];

	a_pair[0] = pair1;
	a_pair[1] = pair2;
	a_pair[2] = 0;
	i = 0;
	if (print_coincidence(a_pair, dic, size))
		return ;
	print_pair1(pair1, dic, size);
	write(1, " ", 1);
	print_pair2(pair2, dic, size);
}

void	print_pair1(char pair1, t_dic *dic, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (pair1 == dic[i].num[0] && ft_strlen(dic[i].num) == 2
			&& dic[i].num[1] == '0')
		{
			ft_putstr(dic[i].wrd);
			break ;
		}
		i++;
	}
}

void	print_pair2(char pair2, t_dic *dic, int size)
{
	int		i;

	i = 0;
	if (pair2 != '0')
	{
		while (i < size)
		{
			if (pair2 == dic[i].num[0] && ft_strlen(dic[i].num) == 1)
			{
				ft_putstr(dic[i].wrd);
				break ;
			}
			i++;
		}
	}
}

void	print_hundred(char n, t_dic *dic, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (n == dic[i].num[0])
		{
			ft_putstr(dic[i].wrd);
			break ;
		}
		i++;
	}
	ft_putstr(" hundred");
}

void	print_num(char n, t_dic *dic, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (n == dic[i].num[0])
		{
			ft_putstr(dic[i].wrd);
			break ;
		}
		i++;
	}
}
