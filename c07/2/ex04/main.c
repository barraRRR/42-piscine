/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:46:45 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/26 13:48:21 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*nbr = "2147483648";
	char	*base_from = "0123456789";
	char	*base_to = "0123456789ABCDEF";
	char	*new_nbr = ft_convert_base(nbr, base_from, base_to);
	if (new_nbr == NULL)
	{
		printf("Memory error.\n");
		return (-1);
	}
	
	printf("%s en base %s es %s en base %s\n", nbr, base_from, new_nbr, base_to);


	free(new_nbr);
	return (0);
}
