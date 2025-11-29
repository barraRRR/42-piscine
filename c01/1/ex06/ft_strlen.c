/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:22:28 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/08 11:28:08 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_strlen(char *str);


int	main(void)
{
	char *str = {"Hello, world!\n"};
	int		n;

	n = ft_strlen(str);
	return (0);
}
*/

int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (!(str[count] == '\0'))
	{
		count++;
	}
	return (count);
}
