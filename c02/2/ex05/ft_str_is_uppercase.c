/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:36:31 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/10 13:39:54 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str = "JAJAJAJA";
	char	*str2 = "jajajaja";
	int		alph1;
	int		alph2;

	alph1 = ft_str_is_uppercase(str);
	alph2 = ft_str_is_uppercase(str2);
	printf("str 1 lower: %i\nstr 2 lower: %i\n", alph1, alph2);
}
*/

int	ft_str_is_uppercase(char *str)
{
	int		n;

	n = 0;
	if (str[0] == '\0')
		return (1);
	while (str[n] != '\0')
	{
		if (str[n] < 65 || str[n] > 90)
			return (0);
		n++;
	}
	return (1);
}
