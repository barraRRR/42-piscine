/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:18:16 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/25 19:23:09 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
void	ft_strcat(char *dest, char *src);
int		jump_to_nbr(char *nbr);

int	checkbase(char *base, int baselen)
{
	int		i;
	int		j;

	i = 0;
	if (baselen < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (j < baselen)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int		cnt;

	cnt = 0;
	while (!(str[cnt] == '\0'))
		cnt++;
	return (cnt);
}

void	ft_strcat(char *dest, char *src)
{
	int		j;

	j = 0;
	while (dest[j])
		j++;
	dest[j] = src[0];
	dest[j + 1] = '\0';
}

void	sign(char *nbr, char *tbase)
{
	int		sign;
	int		i;

	i = 0;
	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	sign = 1;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	if (sign == -1)
		tbase[0] = '-';
}

int	jump_to_nbr(char *nbr)
{
	int		j;

	j = 0;
	while (nbr[j] == '+' || nbr[j] == '-' || nbr[j] == ' '
		|| (nbr[j] >= 9 && nbr[j] <= 13))
	{
		j++;
	}
	return (j);
}
