/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:56:56 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/04 10:57:11 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
