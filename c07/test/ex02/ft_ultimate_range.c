/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:58:31 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/24 15:33:46 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);
int	*ft_range(int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (range == NULL)
		return (-1);
	*range = ft_range(min, max);
	return (max - min);
}

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
	int		min = -1000;
	int		max = 1000;
	int		*test;
	int		i;
	int		s;
	
	test = NULL;
	s = ft_ultimate_range(&test, min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("Range : %i\n", test[i]);
		i++;
	}
	free(test);
	return (0);
}
*/
