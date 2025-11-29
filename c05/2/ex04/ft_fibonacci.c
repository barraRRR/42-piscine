/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:26:42 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/22 09:28:24 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	printf("Resultado de -1 = %i\n", ft_fibonacci(-1));
	printf("Resultado de 2 = %i\n", ft_fibonacci(2));
	printf("Resultado de 3 = %i\n", ft_fibonacci(3));
	printf("Resultado de 4 = %i\n", ft_fibonacci(4));
	printf("Resultado de 5 = %i\n", ft_fibonacci(5));
	printf("Resultado de 6 = %i\n", ft_fibonacci(6));
	printf("Resultado de 7 = %i\n", ft_fibonacci(7));
	printf("Resultado de 8 = %i\n", ft_fibonacci(8));
	return (0);
}
*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
