/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chop_chop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:06:35 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/23 23:31:55 by pmieres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lib.h"

void	chop_chop(char *n, t_dic *dic, int size, int len)
{
	int		pw;
	int		first_chunk;

	if (print_coincidence(n, dic, size))
		return ;
	pw = (len - 1) / 3;
	first_chunk = len % 3;
	if (first_chunk == 0)
	{
		print_three(n, dic, size);
		first_chunk = 3;
	}
	else if (first_chunk == 2)
		print_pair(n[0], n[1], dic, size);
	else if (first_chunk == 1)
		print_num(n[0], dic, size);
	if (pw > 0)
	{
		write(1, " ", 1);
		cal_power(dic, pw, size);
	}
	if (len > first_chunk)
		chop_chop((n + first_chunk), dic, size, (len - first_chunk));
}
