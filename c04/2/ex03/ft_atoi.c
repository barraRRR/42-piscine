/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:54:03 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/19 10:48:28 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char *tests[20] = {
        "1234",
        "-1234",
        "+1234",
        "   5678",
        "  -42abc",
        " --21-+1234ab567",
        " ---+--+1234ab567",
        "0",
        "  +0  ",
        "999999",
		"1234",
        "1234",
        "1234",
        "5678",
        "42abc",
        "21-+1234ab567",
        "1234ab567",
        "0",
        "0  ",
        "999999"
    };

    for (int i = 0; i < 20; i++)
    {
        int r1 = ft_atoi(tests[i]);
        int r2 = atoi(tests[i]);
        printf("Test %d: \"%s\"\n", i+1, tests[i]);
        printf("  ft_atoi = %d\n", r1);
        printf("  atoi    = %d\n", r2);
        printf("------------------------\n");
    }
	return (0);
}
*/

int	ft_atoi(char *str)
{
	int				i;
	int				result;
	int				sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
