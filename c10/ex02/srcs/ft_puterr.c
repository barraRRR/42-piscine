/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 09:36:02 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/16 09:12:12 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include <unistd.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>

void	ft_puterr(char *prog, char *file)
{
	char	*msg;
	char	*bprog;

	msg = strerror(errno);
	bprog = basename(prog);
	write(2, bprog, ft_strlen(bprog));
	write(2, ": ", 2);
	write(2, file, ft_strlen(file));
	write(2, ": ", 2);
	write(2, msg, ft_strlen(msg));
	write(2, "\n", 1);
}
