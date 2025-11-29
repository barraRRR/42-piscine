/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:21:11 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/20 13:06:12 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	a = 0;
	int	sq = 0;

	while (a < 10000)
	{
		sq = ft_sqrt(a);
		if (sq)
			printf("Raiz cuadrada de %i : %i\n", a, ft_sqrt(a));
		a++;
	}
}
*/

int	ft_sqrt(int nb)
{
	int		sq;

	sq = 0;
	if (nb <= 0)
		return (0);
	while (nb != (sq * sq))
	{
		if ((sq * sq) > nb)
			return (0);
		sq++;
	}
	return (sq);
}
