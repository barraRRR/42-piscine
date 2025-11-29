/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmieres- <pmieres-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 17:00:01 by pmieres-          #+#    #+#             */
/*   Updated: 2025/11/23 23:25:37 by pmieres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

typedef struct s_dic
{
	char	*num;
	char	*wrd;
}	t_dic;

void	ft_fill_wrd(int *st, int *end, char *buff, char *numbers);
void	ft_fill_num(int *st, int *end, char *buff, char *numbers);
int		ft_extract_num(int *st, char *buff, int *end, int *temp);
int		ft_extract_wrd(int *st, char *buff, int *end, int *temp);
t_dic	*ft_memory(char *file);
int		ft_file(char *file, char *buff);
void	ft_free_dic(t_dic *matrix, int l);
int		ft_lines(char *buff);
void	ft_print_dic(t_dic *matrix, int l);
int		ft_no_number(char *str);
void	chop_chop(char *n, t_dic *dic, int size, int len);
int		print_coincidence(char *n, t_dic *dic, int size);
void	print_num(char n, t_dic *dic, int size);
void	print_hundred(char n, t_dic *dic, int size);
void	cal_power(t_dic *dic, int pw, int size);
void	print_power(char n_arr[1000], t_dic *dic, int size);
void	print_pair(char pair1, char pair2, t_dic *dic, int size);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strcmp(char *s1, char *s2);
void	print_three(char *n, t_dic *dic, int size);
void	print_pair1(char pair1, t_dic *dic, int size);
void	print_pair2(char pair1, t_dic *dic, int size);
int		ft_input(int argc, char **argv, t_dic *dic, char *num);
#endif  
