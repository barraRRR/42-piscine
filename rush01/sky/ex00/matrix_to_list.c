/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_to_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 10:10:43 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/16 11:23:24 by jbarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes all 16 paths in one list
void	matrix_to_list_right(char arr[6][6], char list[16][6])
{
	int		rw;
	int		cnt;

	rw = 1;
	cnt = 0;
	while (rw <= 4)
	{
		list[cnt][0] = arr[rw][0];
		list[cnt][1] = arr[rw][1];
		list[cnt][2] = arr[rw][2];
		list[cnt][3] = arr[rw][3];
		list[cnt][4] = arr[rw][4];
		list[cnt++][5] = '\0';
		rw++;
	}
}

void	matrix_to_list_top(char arr[6][6], char list[16][6])
{
	int		cl;
	int		cnt;

	cnt = 4;
	cl = 1;
	while (cl <= 4)
	{
		list[cnt][0] = arr[0][cl];
		list[cnt][1] = arr[1][cl];
		list[cnt][2] = arr[2][cl];
		list[cnt][3] = arr[3][cl];
		list[cnt][4] = arr[4][cl];
		list[cnt++][5] = '\0';
		cl++;
	}
}

void	matrix_to_list_left(char arr[6][6], char list[16][6])
{
	int		rw;
	int		cnt;

	cnt = 8;
	rw = 4;
	while (rw >= 1)
	{
		list[cnt][0] = arr[rw][5];
		list[cnt][1] = arr[rw][4];
		list[cnt][2] = arr[rw][3];
		list[cnt][3] = arr[rw][2];
		list[cnt][4] = arr[rw][1];
		list[cnt++][5] = '\0';
		rw--;
	}
}

void	matrix_to_list_bottom(char arr[6][6], char list[16][6])
{
	int		cl;
	int		cnt;

	cnt = 12;
	cl = 4;
	while (cl >= 1)
	{
		list[cnt][0] = arr[5][cl];
		list[cnt][1] = arr[4][cl];
		list[cnt][2] = arr[3][cl];
		list[cnt][3] = arr[2][cl];
		list[cnt][4] = arr[1][cl];
		list[cnt++][5] = '\0';
		cl--;
	}
}

void	populate_list(char arr[6][6], char list[16][6])
{
	matrix_to_list_right(arr, list);
	matrix_to_list_top(arr, list);
	matrix_to_list_left(arr, list);
	matrix_to_list_bottom(arr, list);
}
