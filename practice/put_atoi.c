/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:44:09 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/26 16:06:54 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int n)
{
	long	l;

	l = n;
	if (l < 0)
	{
		write(1, "-", 1);
		l = -l;
	}
	if (l > 10)
		putnbr((int) l / 10);
	putchar((l % 10) + '0');
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	atoi(char *n)
{
	int		i;
	int		sign;
	int		tot;

	i = 0;
	sign = 1;
	tot = 0;
	while (n[i] == ' ' || (n[i] >= 9 && n[i] <= 13))
		i++;
	if (n[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (n[i] == '+')
		i++;
	while (n[i] >= '0' && n[i] <= '9')
		tot = (tot * 10) + (n[i++] - '0');
	return (tot * sign);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error();
		return (1);
	}
	putnbr(atoi(argv[1]));
	return (0);
}




