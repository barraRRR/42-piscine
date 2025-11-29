/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 08:34:58 by cmelero-          #+#    #+#             */
/*   Updated: 2025/11/16 11:33:48 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

		 2 functions To fill all valid 4 number values

*/

// Utilized by fill_ar
int	fill_ar2(int cont, int a, int b, char ar[25][6])
{
	int	d;
	int	c;

	c = 1;
	while (c <= 4)
	{
		if (!(c == a || c == b))
		{
			d = 1;
			while (d <= 4)
			{
				if (!(d == a || d == b || d == c))
				{
					ar[cont][1] = a + '0';
					ar[cont][2] = b + '0';
					ar[cont][3] = c + '0';
					ar[cont][4] = d + '0';
					cont++;
				}
				d++;
			}
		}
		c++;
	}
	return (cont);
}

//Utilized by 
void	fill_ar(char ar[25][6])
{
	int	a;
	int	b;
	int	cont;

	a = 1;
	cont = 1;
	while (a <= 4)
	{
		b = 1;
		while (b <= 4)
		{
			if (b != a)
			{
				cont = fill_ar2(cont, a, b, ar);
			}
			b++;
		}
		a++;
	}
	return ;
}
