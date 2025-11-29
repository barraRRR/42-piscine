/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:15:20 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/13 15:15:32 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_rev_int_tab(int *tab, int size);

int	main (void)
{
	return (0);
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int		cnt;
	int		buf[1000];

	cnt = 0;
	while (cnt < size)
	{
		buf[cnt] = tab[size - cnt - 1];
		cnt++;
	}
	cnt = 0;
	while (cnt < size)
	{
		tab[cnt] = buf[cnt];
		cnt++;
	}
}
