/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:24:43 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/06 14:15:46 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/

void	ft_print_numbers(void)
{
	char	*numbers;

	numbers = "0123456789";
	write(1, numbers, 10);
}
