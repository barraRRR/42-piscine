/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:14:47 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/10 15:16:40 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[13] = "hola, mundo!";

	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
*/

char	*ft_strupcase(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
	{
		if (str[cnt] >= 'a' && str[cnt] <= 'z')
		{
			str[cnt] = str[cnt] - ('a' - 'A');
			cnt++;
		}
		else
			cnt++;
	}
	return (str);
}
