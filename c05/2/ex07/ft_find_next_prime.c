/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:47:25 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/21 11:02:40 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

/*
int	main(void)
{
	int	a = 0;
	
	while (a < 100)
	{
		printf("El siguiente primo de %i es : %i\n", a, ft_find_next_prime(a));
		a++;
	}
	return (0);
}
*/

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

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
