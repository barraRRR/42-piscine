/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:36:35 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/03 16:41:47 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
long	to_10(char *old_n, char *base, int baselen, int i);
void	ft_nbr_base(long n10, char *new_n, char *base, int baselen);
int		checkbase(char *base, int baselen);
void	ft_strcat(char *dest, char *src);
void	take_nbr(char *str, char *base, char *old_n, int j);
void	sign(char *nbr, char *new_n);
char	*alloc_and_check(void);
int		ft_strlen(char *str);
int		is_base(char c, char *base);
int		what(char c);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n10;
	char	*new_n;

	new_n = alloc_and_check();
	if (!nbr || !base_from || !base_to || !new_n
		|| !(checkbase(base_from, ft_strlen(base_from))))
	{
		free(new_n);
		return (NULL);
	}
	n10 = to_10(nbr, base_from, ft_strlen(base_from), 0);
	if (!(checkbase(base_to, ft_strlen(base_to))))
	{
		free(new_n);
		return (NULL);
	}
	if (n10 != 0)
		sign(nbr, new_n);
	ft_nbr_base(n10, new_n, base_to, ft_strlen(base_to));
	return (new_n);
}

long	to_10(char *nbr, char *base, int baselen, int i)
{
	long	n10;
	int		j;

	n10 = 0;
	while (what(nbr[i]) == 1)
		i++;
	while (what(nbr[i]) == 2)
		i++;
	while (nbr[i] && is_base(nbr[i], base))
	{
		j = 0;
		while (base[j])
		{
			if (nbr[i] == base[j])
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

void	ft_nbr_base(long n10, char *new_n, char *base, int baselen)
{
	if (n10 >= baselen)
		ft_nbr_base((n10 / baselen), new_n, base, baselen);
	ft_strcat(new_n, &base[n10 % baselen]);
}

char	*alloc_and_check(void)
{
	char	*new_nbr;

	new_nbr = (char *)malloc(sizeof(char) * 34);
	if (!new_nbr)
		return (NULL);
	new_nbr[0] = '\0';
	return (new_nbr);
}

int	what(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else if (c == '+' || c == '-')
		return (2);
	else
		return (0);
}
