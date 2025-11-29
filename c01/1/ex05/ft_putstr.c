/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 10:54:57 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/08 10:59:47 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "Hello, world!\n";
	ft_putstr(str);
	return (0);
}
*/

void	ft_putstr(char *str)
{
	int		count;

	count = 0;
	while (!(str[count] == '\0'))
	{
		write(1, &str[count], 1);
		count++;
	}
}
