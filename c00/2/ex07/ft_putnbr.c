/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:10:26 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/07 11:09:57 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

/*
int		main(void)
{
		ft_putnbr(0);
		return (0);
}
*/

void	ft_putnbr(int nb)
{
	unsigned int		u_num;
	char				buf[10];
	int					count;

	count = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		u_num = -nb;
	}
	else
		u_num = nb;
	while (u_num > 0)
	{
		buf[count++] = (u_num % 10) + '0';
		u_num /= 10;
	}
	while (count-- > 0)
		write(1, &buf[count], 1);
}
