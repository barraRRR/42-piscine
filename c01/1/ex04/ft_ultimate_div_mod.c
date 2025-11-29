/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:58:04 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/11 10:13:37 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int		a;
	int		b;

	a = 10;
	b = 6;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		buf_a;
	int		buf_b;

	buf_a = *a;
	buf_b = *b;
	*a = buf_a / buf_b;
	*b = buf_a % buf_b;
}
