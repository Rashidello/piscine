/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:23:25 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/13 02:48:28 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	print_grid(int grid[4][4]);
int		count_visible_left(int grid[4][4], int row);
int		count_visible_right(int grid[4][4], int row);
int		count_visible_top(int grid[4][4], int col);
int		count_visible_bottom(int grid[4][4], int col);
int		is_valid(int grid[4][4], int row, int col, int num);

int	check_constraints(int grid[4][4], int constraints[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (count_visible_left(grid, i) != constraints[8 + i])
			return (0);
		if (count_visible_right(grid, i) != constraints[12 + i])
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (count_visible_top(grid, i) != constraints[i])
			return (0);
		if (count_visible_bottom(grid, i) != constraints[4 + i])
			return (0);
		i++;
	}
	return (1);
}

int	solve(int grid[4][4], int constraints[16], int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == 16)
		return (check_constraints(grid, constraints));
	row = pos / 4;
	col = pos % 4;
	num = 1;
	while (num <= 4)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, constraints, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	parse_input(char *input, int constraints[16])
{
	int	i;
	int	constraint_index;

	i = 0;
	constraint_index = 0;
	while (input[i] && constraint_index < 16)
	{
		if (input[i] >= '1' && input[i] <= '4')
		{
			constraints[constraint_index] = input[i] - '0';
			constraint_index++;
		}
		else if (input[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (constraint_index == 16);
}

int	ft_print_error(void)
{
	ft_putstr("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	constraints[16];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	if (argc != 2)
		return (ft_print_error());
	if (!parse_input(argv[1], constraints))
		return (ft_print_error());
	if (solve(grid, constraints, 0))
		print_grid(grid);
	else
		return (ft_print_error());
	return (0);
}
