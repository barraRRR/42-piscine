/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:22:20 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/10 15:32:10 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[13] = "HOLA, MUNDO!";

	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}
*/

char	*ft_strlowcase(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt])
	{
		if (str[cnt] >= 'A' && str[cnt] <= 'Z')
		{
			str[cnt] = str[cnt] + ('a' - 'A');
			cnt++;
		}
		else
			cnt++;
	}
	return (str);
}
