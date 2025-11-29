/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:38:56 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/08 16:10:38 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	ft_sort_int_tab();
	return (0);
}
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int		buf;
	int		swaps;
	int		count;

	count = 0;
	swaps = 1;
	while (swaps > 0)
	{
		count = 0;
		swaps = 0;
		while (count < size - 1)
		{
			if (tab[count] > tab[count + 1])
			{
				buf = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = buf;
				swaps++;
			}
			count++;
		}
	}
}
