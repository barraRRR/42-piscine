/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:59:02 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/20 13:37:25 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int		a;
	int		p;

	p = 0;
	a = 0;
	while (a < 1000)
	{
		p = ft_is_prime(a);
		if (p)
			printf("%i es número primo.\n", a);
		a++;
	}
	return (0);
}
*/

int	ft_is_prime(int nb)
{
	int		i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
