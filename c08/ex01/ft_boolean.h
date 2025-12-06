/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 10:44:04 by jbarreir          #+#    #+#             */
/*   Updated: 2025/12/06 10:59:01 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef enum t_bool
{
	FALSE,
	TRUE
}	t_bool;

# define ODD_MESSAGE "I have an odd number of arguments.\n"
# define EVEN_MESSAGE "I have an even number of arguments.\n"
# define SUCCESS 0

t_bool	ft_is_even(int nbr);
void	ft_putstr(char *str);

#endif
