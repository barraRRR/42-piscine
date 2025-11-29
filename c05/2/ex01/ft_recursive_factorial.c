/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:18:01 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/18 18:59:43 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int fac5 = ft_recursive_factorial(5);
	int fac9 = ft_recursive_factorial(9);
	int fac26 = ft_recursive_factorial(26);
	int fac58 = ft_recursive_factorial(58);

	printf("El resultado de 5! es : %i\n", fac5);
	printf("El resultado de 9! es : %i\n", fac9);
	printf("El resultado de 26! es : %i\n", fac26);
	printf("El resultado de 58! es : %i\n", fac58);
	return (0);
}
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
