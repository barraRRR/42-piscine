/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_str_is_alpha.c									:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: jbarreir <jbarreir@student.42madrid.c		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2025/11/10 09:53:23 by jbarreir		   #+#	  #+#			  */
/*	 Updated: 2025/11/10 12:23:42 by jbarreir		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str = "";
	char	*str2 = "H&4$";
	int		alph1;
	int		alph2;

	alph1 = ft_str_is_alpha(str);
	alph2 = ft_str_is_alpha(str2);
	printf("str 1 only alpha: %i\nstr 2 only alpha: %i", alph1, alph2);
}
*/

int	ft_str_is_alpha(char *str)
{
	int		n;

	n = 0;
	if (str[0] == '\0')
		return (1);
	while (str[n] != '\0')
	{
		if ((str[n] < 'A' || str[n] > 'Z') && (str[n] < 'a' || str[n] > 'z'))
			return (0);
		n++;
	}
	return (1);
}
