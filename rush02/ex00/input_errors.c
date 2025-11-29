/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmieres- <pmieres-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:45:43 by pmieres-          #+#    #+#             */
/*   Updated: 2025/11/23 23:15:57 by pmieres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

#include <unistd.h>

int	ft_no_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			write (2, "Error\n", 7);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_input(int argc, char **argv, t_dic *dic, char *num)
{
	if (argc == 2)
	{
		dic = ft_memory("numbers.dict");
		num = &argv[1][0];
		if (ft_no_number(argv[1]))
			return (1);
	}
	else if (argc == 3)
	{
		dic = ft_memory(argv[1]);
		num = &argv[2][0];
		if (ft_no_number(argv[2]))
			return (1);
	}
	else
	{
		write (2, "Error\n", 7);
		return (1);
	}
	if (dic == NULL)
		return (1);
	return (0);
}
