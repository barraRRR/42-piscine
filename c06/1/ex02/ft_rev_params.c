/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 08:56:32 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/20 09:00:15 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (argc > 1)
	{
		j = 0;
		while (argv[argc - 1][j])
		{
			write(1, &argv[argc - 1][j], 1);
			j++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
