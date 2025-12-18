/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:42:18 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/18 11:48:53 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		*map;
	int		i;

	map = malloc(sizeof(int) * lenght);
	i = 0;
	while (i < lenght)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
