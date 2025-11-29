/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:13:49 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/19 14:23:38 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int ft_recursive_power(int nb, int power);

int		main(void)
{
	printf("Resultado : 5 elevado a 2 = %i\n", ft_recursive_power(5, 2));
	printf("Resultado : 4 elevado a 3 = %i\n", ft_recursive_power(4, 3));
	printf("Resultado : 10 elevado a 0 = %i\n", ft_recursive_power(10, 0));
	printf("Resultado : -1 elevado a -1 = %i\n", ft_recursive_power(-1, -1));
}
*/

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
		return (nb *= ft_recursive_power(nb, power - 1));
	return (nb);
}
