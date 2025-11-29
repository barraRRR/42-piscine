/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:03:30 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/19 14:12:31 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int ft_iterative_power(int nb, int power);

int		main(void)
{
	printf("Resultado : 5 elevado a 2 = %i\n", ft_iterative_power(5, 2));
	printf("Resultado : 4 elevado a 3 = %i\n", ft_iterative_power(4, 3));
	printf("Resultado : 10 elevado a 0 = %i\n", ft_iterative_power(10, 0));
	printf("Resultado : -1 elevado a -1 = %i\n", ft_iterative_power(-1, -1));
}
*/

int	ft_iterative_power(int nb, int power)
{
	int		result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
