/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:00:50 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/12 10:27:27 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size);

int     main(void)
{
    char    *src = "Qué pasa evaluador? Qué te cuentas? Te mola el código?\n";
    char    dest[1000];
	unsigned int	len;

    len = ft_strlcpy(dest, src, 10);
    printf("%s\n", dest);
	printf("Total char in origin: %i\n", len);
    return (0);
}
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		cnt;

	cnt = 0;
	while (src[cnt] != '\0' || cnt < size)
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	dest[size] = '\0';
	return (cnt);
}
