/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:33:27 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/11 11:51:04 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int     main(void)
{
    char    *src = "Pues nada, aquí seguimos evaluando. Ponme un 10, no?\n";
    char    dest[1000];
    
    ft_strncpy(dest, src, 54);
    printf("%s", dest);
    return (0);
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		cnt;

	cnt = 0;
	while (cnt < n && src[cnt] != '\0')
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	while (cnt < n)
	{
		dest[cnt] = '\0';
		cnt++;
	}
	return (dest);
}
