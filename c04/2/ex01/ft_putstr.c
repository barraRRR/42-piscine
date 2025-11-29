/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:52:25 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/18 11:46:36 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_putstr(char *str);

int	main(void)
{
	char	str1[] = "Hola, mundo\n";
	char	str2[] = "Adios, mundo\n";
	char	str3[] = "";
	char	str4[] = "Prepárate para ponerme un 10, evaluador\n";

	ft_putstr(str1);
	ft_putstr(str2);
	ft_putstr(str3);
	ft_putstr(str4);
}
*/

void	ft_putstr(char *str)
{
	unsigned int	cnt;

	cnt = 0;
	while (str[cnt])
	{
		write(1, &str[cnt], 1);
		cnt++;
	}
}
