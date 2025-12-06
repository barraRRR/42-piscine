/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 11:21:56 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/06 13:26:15 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *dst, char *src)
{
	int		i;

	i = 0;
	while (src && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

void	free_partial(t_stock_str *tab, int i)
{
	int		f;

	f = 0;
	while (f < i)
		free(tab[f++].copy);
	free(tab);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	if (!av)
		return (NULL);
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = (char *)malloc(ft_strlen(av[i] + 1));
		if (tab[i].copy == NULL)
		{
			free_partial(tab, i);
			return (NULL);
		}
		ft_strcpy(tab[i].copy, av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
