/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:54:24 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/24 11:59:36 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*p;

	p = malloc(sizeof(src));
	if (p == NULL)
		return (NULL);
	ft_strcpy(p, src);
	return (p);
}

void	ft_strcpy(char *dest, char *src)
{
	int		count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
}

/*
int	main(void)
{
	char	*src = "Hola, mundo!";
	char	*dest = malloc(sizeof(src));

	dest = ft_strdup(src);
	
	printf("Resultado : %s\n", dest);
	free(dest);
	return (0);
}
*/
