/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_print_alphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:51:40 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/08 11:41:30 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();

	return (0);
}
*/

void	ft_print_alphabet(void)
{
	char	*alphabet;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	write(1, alphabet, 26);
}
