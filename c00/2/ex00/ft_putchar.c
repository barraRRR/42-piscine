/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:37:36 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/05 18:50:23 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char character);

int	main(void)
{
	ft_putchar('b');
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
