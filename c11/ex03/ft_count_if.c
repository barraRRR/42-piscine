/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:07:54 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/18 13:11:34 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int		total;
	int		i;

	i = 0;
	total = 0;
	while (i < lenght)
	{
		if (f(tab[i]))
			total++;
		i++;
	}
	return (total);
}
