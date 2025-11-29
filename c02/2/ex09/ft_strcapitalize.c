/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:12:49 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/11 10:37:31 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[63] = "salut, comment tu vas ?";
	char	str2[63] = " 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	ft_strcapitalize(str2);
	printf("%s\n", str);
	printf("%s\n", str2);
	return (0);
}
*/

char	*ft_strcapitalize(char *str)
{
	int		cnt;

	cnt = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');
	while (str[cnt])
	{
		if (str[cnt] >= 'a' && str[cnt] <= 'z')
		{
			if (str[cnt - 1] >= 32 && str[cnt - 1] <= 47)
				str[cnt] -= ('a' - 'A');
		}
		cnt++;
	}
	return (str);
}
