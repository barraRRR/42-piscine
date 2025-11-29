/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: jbarreir <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/11/06 13:39:05 by jbarreir	       #+#    #+#	      */
/*   Updated: 2025/11/10 11:05:32 by jbarreir         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_comb2(void)
{
	char	buf[5];
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			buf[0] = a / 10 + '0';
			buf[1] = a % 10 + '0';
			buf[2] = ' ';
			buf[3] = b / 10 + '0';
			buf[4] = b % 10 + '0';
			write(1, buf, 5);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
