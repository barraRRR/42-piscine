/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:54:24 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/27 08:46:14 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	if (src == NULL)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	p = malloc(i + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
int	main(void)
{
	char	*src = "Hola, mundo! Qué pasa carallo. Por aquí andamos de risas";
	char	*dest = ft_strdup(src);
	
	printf("Resultado : %s\n", dest);
	free(dest);
	return (0);
}
*/
