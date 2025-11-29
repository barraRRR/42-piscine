/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:08:07 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/11 17:35:19 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[1000] = "Hola y";
	char	s2[1000] = " adios!\n";
	char	*cat;

	cat = ft_strncat(s1, s2, 50);
	printf("El resultado de strcat es: %s", cat);
	return (0);
}
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		s_cnt;
	unsigned int		d_cnt;

	d_cnt = 0;
	s_cnt = 0;
	while (dest[d_cnt])
		d_cnt++;
	while (src[s_cnt] && s_cnt < nb)
	{
		dest[d_cnt + s_cnt] = src[s_cnt];
		s_cnt++;
	}
	dest[d_cnt + s_cnt] = '\0';
	return (dest);
}
