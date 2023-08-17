/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjegades <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:09:09 by tjegades          #+#    #+#             */
/*   Updated: 2023/08/14 16:09:10 by tjegades         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_metadata
{
	int		**map;
	int		rows;
	int		cols;
	int		valid;
	char	empty;
	char	obstacle;
	char	filled;

}	t_data;

typedef struct s_sol
{
	int	x;
	int	y;
	int	size;
}	t_sol;

t_sol	solve_bsq(int **map, int rnum, int cnum);
char	*valid_args(int argc, char **argv);
int		read_map(char *map, t_data *data);
void	map_converter(char *file, t_data *data);
void	write_soln(t_sol sol, t_data data);
char	*read_from_stdin(void);
int		process_first_line(char *file, t_data *data);
int		check_map_validity(t_data *data, char *file);
void	convert_symbols(char *file, t_data *data);
void	first_line_atoi(t_data *data, char *firstline);
void	check_rows_and_cols(int fd, t_data *data);
void	free_sol(int **sol_matrix, int rnum);

#	endif