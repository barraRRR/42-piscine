/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:38:29 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/19 12:39:06 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);
int		checkbase(char *base);
void	take_base(char *str, char *base, char *strbase, int i);
void	base_n_to_10(long *base10, char *just_base, char *base, int baselen);
int		ft_atoi_base(char *str, char *base);

/*
int main(void)
{
	char *base8      = "galimero";          // base 8 (8 símbolos)
	char *base5      = "CeLtA";             // base 5
	//char *base13     = "0123456789qwe";     // base 13
	char *baseFail1  = "J";                 // tamaño 1 → inválida
	char *baseFail2  = "jajaja";            // repetida → inválida
	char *baseFail3  = "54 23";             // espacio → inválida
	//char *baseFail4  = "34+56-78";          // + o - → inválida

	int	atoi8_1 = ft_atoi_base("galgalmal" ,base8);
	int	atoi8_2 = ft_atoi_base("   --+-galgalmal" ,base8);
	int	atoi8_3 = ft_atoi_base("8galgalmal" ,base8);
	
	int	atoi5_1 = ft_atoi_base("etA" ,base5);
	int	atoi5_2 = ft_atoi_base("CetAC" ,base5);
	int	atoi5_3 = ft_atoi_base(" AAioAetA" ,base5);

	int	atoiF_1 = ft_atoi_base("jjj" ,baseFail1);
	int	atoiF_2 = ft_atoi_base(" 54   3233" ,baseFail2);
	int	atoiF_3 = ft_atoi_base(" AAioAetA" ,baseFail3);
	
	printf("--- Batería de tests ---\n");
	
	printf("Resultado de galgalmal en base %s: %i\n", base8, atoi8_1);
	printf("Resultado de    --+-galgalmal en base %s: %i\n", base8, atoi8_2);
	printf("Resultado de 8galgalmal en base %s: %i\n", base8, atoi8_3);
	
	printf("Resultado de etA en base %s: %i\n", base5, atoi5_1);
	printf("Resultado de CetAC en base %s: %i\n", base5, atoi5_2);
	printf("Resultado de  AAioAetA en base %s: %i\n", base5, atoi5_3);

	printf("Resultado de jjj en base %s: %i\n", baseFail1, atoiF_1);
	printf("Resultado de  54   3233 en base %s: %i\n", baseFail2, atoiF_2);
	printf("Resultado de  AAioAetA en base %s: %i\n", baseFail2, atoiF_3);
	return (0);
}
*/

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkbase(char *base)
{
	int		i;
	int		j;
	int		baselen;

	baselen = ft_strlen(base);
	i = 0;
	if (baselen < 2)
		return (0);
	while (i < baselen)
	{
		j = i + 1;
		while (j < baselen)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	take_base(char *str, char *base, char *strbase, int i)
{
	int		j;
	int		k;
	int		match;

	j = 0;
	while (str[i])
	{
		k = 0;
		while (base[k])
		{
			match = 0;
			if (str[i] == base[k])
			{
				match = 1;
				break ;
			}
			k++;
		}
		if (!match)
		{
			strbase[k] = '\0';
			break ;
		}
		strbase[j++] = str[i++];
	}
}

void	base_n_to_10(long *base10, char *just_base, char *base, int baselen)
{
	int		i;
	int		k;

	i = 0;
	*base10 = 0;
	while (just_base[i])
	{
		k = 0;
		while (base[k])
		{
			if (just_base[i] == base[k])
			{
				*base10 = (*base10 * baselen) + k;
				break ;
			}
			k++;
		}
		i++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int		baselen;
	char	just_base[1000];
	long	base10;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	while (i < 1000)
		just_base[i++] = '\0';
	if (!(checkbase(base)))
		return (0);
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	baselen = ft_strlen(base);
	take_base(str, base, just_base, i);
	base_n_to_10(&base10, just_base, base, baselen);
	return (base10 * sign);
}
