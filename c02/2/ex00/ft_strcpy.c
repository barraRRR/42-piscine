/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:35:09 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/11 13:51:56 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int     main(void)
{
    char    *src = "Qué pasa evaluador? Qué te cuentas? Te mola el código?\n";
    char    dest[1000];
    
    ft_strcpy(dest, src);
    printf("%s", dest);
    return (0);
}
*/

char	*ft_strcpy(char *dest, char *src)
{
	int		count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
