/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 09:19:33 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/20 13:14:34 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_strlen(char *str);
int		checkbase(char *str, int baselen);

int	main(void)
{
	char	*base[8] = {
		"k",
		"k",
		"01",
		" $%",
		"caso",
		"34567",
		"pfyjN4L",
		"qwertyop"
	};

	int i = 1923;

	printf("\n%d en base %s es igual a: ", i, base[2]);
	fflush(stdout);
	ft_putnbr_base(i, base[2]);
	printf("\n--------------------\n");
	
	printf("\n%i en base %s es igual a: ", i, base[3]);
	fflush(stdout);
	ft_putnbr_base(i, base[3]);
	printf("\n--------------------\n");

	printf("\n%i en base %s es igual a: ", i, base[4]);
	fflush(stdout);
	ft_putnbr_base(i, base[4]);
	printf("\n--------------------\n");

	printf("\n%i en base %s es igual a: ", i, base[5]);
	fflush(stdout);
	ft_putnbr_base(i, base[5]);
	printf("\n--------------------\n");

	printf("\n%i en base %s es igual a: ", i, base[6]);
	fflush(stdout);
	ft_putnbr_base(i, base[6]);
	printf("\n--------------------\n");

	printf("\n%i en base %s es igual a: ", i, base[7]);
	fflush(stdout);
	ft_putnbr_base(i, base[7]);
	printf("\n--------------------\n");



	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		baselen;
	long	n;

	n = nbr;
	baselen = ft_strlen(base);
	if (!(checkbase(base, baselen)))
		return ;
	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= baselen)
		ft_putnbr_base((int)(n / baselen), base);
	write(1, &base[n % baselen], 1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkbase(char *base, int baselen)
{
	int		i;
	int		j;

	i = 0;
	if (baselen < 2)
		return (0);
	while (i < baselen)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < baselen)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
