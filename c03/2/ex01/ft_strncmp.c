/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:41:40 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/12 17:44:58 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;
	int		cmp;

	s1 = "Hola, mu9ndo! y ahora s1 es más largo\n";
	s2 = "Hola, mu9ndo maldito!\n";
	cmp = ft_strncmp(s1, s2, 15);
	printf("El resultado de strcmp es: %i\n", cmp);
	return (0);
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
