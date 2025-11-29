/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:39:12 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/07 13:57:01 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a = 10;
	int b = 6;
	int div;
	int mod;

	a = 10;
	b = 6;
	ft_div_mod(a, b, &div, &mod);
	return (0);
}
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
