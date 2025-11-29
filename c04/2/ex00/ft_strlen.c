/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:45:08 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/13 11:49:33 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str = {"Hello, world! Good bey world"};
	int		n;

	n = ft_strlen(str);
	printf("Numero de caracteres en %s: %d\n", str, n);
	return (0);
}
*/

int	ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}
