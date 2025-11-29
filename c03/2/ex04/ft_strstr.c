/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:37:40 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/13 17:55:21 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[1000] = "Evaluador, como suspendas a Javi me autodestruiré";
	char	s2[1000] = "Javi";
	char	*cat;

	cat = ft_strstr(s1, s2);
	printf("El resultado de strstr es: %s", cat);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	s_cnt;
	unsigned int	f_cnt;

	s_cnt = 0;
	f_cnt = 0;
	while (str[s_cnt])
	{
		f_cnt = 0;
		if (str[s_cnt] == to_find[0])
		{
			while (to_find[f_cnt] && str[s_cnt + f_cnt] == to_find[f_cnt])
				f_cnt++;
			if (to_find[f_cnt] == '\0')
				return (&str[s_cnt]);
		}
		s_cnt++;
	}
	return (NULL);
}
