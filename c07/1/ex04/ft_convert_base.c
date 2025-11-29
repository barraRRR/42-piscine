/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:36:35 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/25 19:21:25 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
long	to_10(char *fbase, char *base, int baselen);
void	ft_nbr_base(long n10, char *tbase, char *base, int baselen);
int		checkbase(char *base, int baselen);
int		ft_strlen(char *str);
void	ft_strcat(char *dest, char *src);
void	take_nbr(char *str, char *base, char *fbase, int j);
void	sign(char *nbr, char *tbase);
int		jump_to_nbr(char *nbr);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n10;
	char	*fbase;
	char	*tbase;
	int		baselen;
	int		j;

	fbase = malloc(64);
	tbase = malloc(64);
	if (fbase == NULL || fbase == NULL)
		return (NULL);
	fbase[0] = '\0';
	tbase[0] = '\0';
	baselen = ft_strlen(base_from);
	if (!(checkbase(base_from, baselen)))
		return (NULL);
	j = 0;
	take_nbr(nbr, base_from, fbase, j);
	n10 = to_10(fbase, base_from, baselen);
	baselen = ft_strlen(base_to);
	if (!(checkbase(base_to, baselen)))
		return (NULL);
	sign(nbr, tbase);
	ft_nbr_base(n10, tbase, base_to, baselen);
	free(fbase);
	return (tbase);
}

void	take_nbr(char *nbr, char *base, char *fbase, int j)
{
	int		k;
	int		i;
	int		match;

	j = 0;
	i = jump_to_nbr(nbr);
	while (nbr[i])
	{
		k = 0;
		while (base[k])
		{
			match = 0;
			if (nbr[i] == base[k])
			{
				match = 1;
				break ;
			}
			k++;
		}
		if (!match)
			break ;
		fbase[j++] = nbr[i++];
	}
	fbase[j] = '\0';
}

long	to_10(char *fbase, char *base, int baselen)
{
	long	n10;
	int		i;
	int		j;

	i = 0;
	n10 = 0;
	while (fbase[i])
	{
		j = 0;
		while (base[j])
		{
			if (fbase[i] == base[j])
			{
				n10 = (n10 * baselen) + j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (n10);
}

void	ft_nbr_base(long n10, char *tbase, char *base, int baselen)
{
	int		i;

	i = 0;
	if (n10 >= baselen)
		ft_nbr_base((n10 / baselen), tbase, base, baselen);
	ft_strcat(tbase, &base[n10 % baselen]);
}
