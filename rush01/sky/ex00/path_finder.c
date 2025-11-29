/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_finder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 11:36:45 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/16 12:12:12 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char		g_valid[24][6] = {
	"14321",
	"14231",
	"14213",
	"14312",
	"14123",
	"14132",
	"21423",
	"21432",
	"22143",
	"22413",
	"22431",
	"23124",
	"23214",
	"23142",
	"23241",
	"23412",
	"23421",
	"31243",
	"31342",
	"32134",
	"32314",
	"32341",
	"31324",
	"41234",
};

void	populate_list(char arr[6][6], char list[16][6]);

int	pathcmp(char *s1, const char *s2)
{
	unsigned int		cnt;

	cnt = 0;
	while (cnt < 5)
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		cnt++;
	}
	return (0);
}

int	path_finder(char list[16][6])
{
	int		l_cnt;
	int		v_cnt;
	int		match;

	match = 1;
	l_cnt = 0;
	while (l_cnt < 16)
	{
		v_cnt = 0;
		while (v_cnt < 24)
		{
			match = 1;
			match = pathcmp(list[l_cnt], g_valid[v_cnt]);
			if (match == 0)
			{
				break ;
			}
			v_cnt++;
		}
		if (match != 0)
			return (1);
		l_cnt++;
	}
	return (match);
}

// match == 0 -> it's a match! || match == 1 -> invalid matrix
int	final_finder(char arr[6][6])
{
	int		match;	
	char	list[16][6];

	populate_list(arr, list);
	match = path_finder(list);
	return (match);
}
