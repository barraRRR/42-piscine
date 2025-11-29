/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:15:10 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/23 21:29:25 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*       a custom library of handy functions from the piscine
 *       ----------------------------------------------------
 */

#include "lib.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		cnt;

	cnt = 0;
	if (n == 0)
		return (0);
	while (cnt < n)
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		if (s1[cnt] == '\0' && s2[cnt] == '\0')
			return (0);
		cnt++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		cnt;

	cnt = 0;
	while (s1[cnt] && s2[cnt])
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		cnt++;
	}
	return (s1[cnt] - s2[cnt]);
}
