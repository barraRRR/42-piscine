/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:53:28 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/12 15:02:12 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	*s1;
	char	*s2;
	int		cmp;

	s1 = "Hola, mundo jajajaja \n";
	s2 = "Adios, mundo maldito!\n";
	cmp = ft_strcmp(s1, s2);
	printf("El resultado de strcmp es: %i", cmp);
	return (0);
}
*/

int	ft_strcmp(char *s1, char *s2)
{
	int		cnt;

	cnt = 0;
	while (s1[cnt] && s2[cnt])
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		cnt++;
	}
	return (s1[cnt] - s2[cnt]);
}
