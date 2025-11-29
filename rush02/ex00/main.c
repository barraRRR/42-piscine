/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmieres- <pmieres-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:48:04 by pmieres-          #+#    #+#             */
/*   Updated: 2025/11/23 23:21:00 by pmieres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	t_dic	*dic;
	char	*num;

	dic = 0;
	num = 0;
	if (ft_input(argc, argv, dic, num))
		return (0);
	chop_chop(num, dic, 41, ft_strlen(num));
	ft_free_dic(dic, 41);
	return (0);
}
