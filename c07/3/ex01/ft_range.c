/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:11:07 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/24 13:04:44 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int			*arr;
	int			int_max;
	size_t		s;
	int			i;

	if (min >= max)
		return (NULL);
	int_max = 2147483647;
	s = max - min;
	arr = malloc(sizeof(int) * s);
	i = 0;
	if (arr == NULL)
		return (NULL);
	while (min < max && min < int_max)
		arr[i++] = min++;
	return (arr);
}

/*
int	main(void)
{
	int		min = 10000;
	int		max = 1000;
	int		*test = ft_range(min, max);
	int		i;

	i = 0;
	while (i < (max - min))
	{
		printf("Range : %i\n", test[i]);
		i++;
	}
	return (0);
}
*/
