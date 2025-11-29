/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:57:36 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/12 14:01:00 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str = "JAJAJAJA";
	char	*str2 = "©©©©©©©";
	int		alph1;
	int		alph2;

	alph1 = ft_str_is_printable(str);
	alph2 = ft_str_is_printable(str2);
	printf("str 1 print: %i\nstr 2 print: %i\n", alph1, alph2);
}
*/

int	ft_str_is_printable(char *str)
{
	int		n;

	n = 0;
	if (str[0] == '\0')
		return (1);
	while (str[n] != '\0')
	{
		if (str[n] < 32 || str[n] > 126)
			return (0);
		n++;
	}
	return (1);
}
