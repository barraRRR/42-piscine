/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:56:05 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/10 13:42:03 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str = "";
	char	*str2 = "898776";
	int		alph1;
	int		alph2;

	alph1 = ft_str_is_numeric(str);
	alph2 = ft_str_is_numeric(str2);
	printf("str 1 only alpha: %i\nstr 2 only alpha: %i", alph1, alph2);
}
*/

int	ft_str_is_numeric(char *str)
{
	int		n;

	n = 0;
	if (str[0] == '\0')
		return (1);
	while (str[n] != '\0')
	{
		if (str[n] < 48 || str[n] > 57)
			return (0);
		n++;
	}
	return (1);
}
