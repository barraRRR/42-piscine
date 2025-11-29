/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:32:16 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/11 16:05:34 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	s1[50] = "Hola y";
	char	s2[100] = " adios!\n";
	char	*cat;

	cat = ft_strcat(s1, s2);
	printf("El resultado de strcat es: %s", cat);
	return (0);
}
*/

char	*ft_strcat(char *dest, char *src)
{
	int		s_cnt;
	int		d_cnt;

	d_cnt = 0;
	s_cnt = 0;
	while (dest[d_cnt])
		d_cnt++;
	while (src[s_cnt])
	{
		dest[d_cnt + s_cnt] = src[s_cnt];
		s_cnt++;
	}
	dest[d_cnt + s_cnt] = '\0';
	return (dest);
}
