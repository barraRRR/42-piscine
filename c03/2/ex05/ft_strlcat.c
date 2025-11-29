/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:42:42 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/13 11:09:47 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_strlen(char *str);

int	main(void)
{
	char	dest[1000] = "Hola y";
	char	src[1000] = " adios!\n";
	unsigned int	len;

	len = ft_strlcat(dest, src, 20);
	printf("Dest: %s\n", dest);
	printf("El resultado de strlcat es: %i", len);
	return (0);
}
*/

int	ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (!(str[cnt] == '\0'))
		cnt++;
	return (cnt);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_cnt;
	unsigned int	d_cnt;
	unsigned int	s_len;

	s_len = ft_strlen(src);
	s_cnt = 0;
	d_cnt = 0;
	while (dest[d_cnt])
		d_cnt++;
	if (size == 0 || d_cnt >= size)
		return (s_len + d_cnt);
	while (src[s_cnt] && (s_cnt + d_cnt) < size - 1)
	{
		dest[d_cnt + s_cnt] = src[s_cnt];
		s_cnt++;
	}
	dest[d_cnt + s_cnt] = '\0';
	return (s_len + d_cnt);
}
