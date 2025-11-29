/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:29:08 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/07 09:20:50 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

void	ft_print_comb(void)
{
	static char	num[3] = {'0', '1', '2'};

	write(1, num, 3);
	if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
	{
		write(1, ", ", 2);
	}
	if (num[2] < '9')
		num[2]++;
	else if (num[1] < '8')
	{
		num[1]++;
		num[2] = num[1] + 1;
	}
	else if (num[0] < '7')
	{
		num[0]++;
		num[1] = num[0] + 1;
		num[2] = num[1] + 1;
	}
	else
		return ;
	ft_print_comb();
}
