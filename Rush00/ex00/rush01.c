/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:28:15 by aalsaleh          #+#    #+#             */
/*   Updated: 2025/07/06 13:39:56 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOP_LEFT '/'
#define TOP_RIGHT '\\'
#define BOTTOM_LEFT '\\'
#define BOTTOM_RIGHT '/'
#define TOP_BOTTOM '*'
#define LEFT_RIGHT '*'

void	ft_putchar(char c);

void	print_first_row(int x)
{
	int	col;

	col = 0;
	while (col < x)
	{
		if (col == 0)
			ft_putchar(TOP_LEFT);
		else if (col == x - 1)
			ft_putchar(TOP_RIGHT);
		else
			ft_putchar(TOP_BOTTOM);
		col += 1;
	}
	ft_putchar('\n');
}

void	print_last_row(int x)
{
	int	col;

	col = 0;
	while (col < x)
	{
		if (col == 0)
			ft_putchar(BOTTOM_LEFT);
		else if (col == x - 1)
			ft_putchar(BOTTOM_RIGHT);
		else
			ft_putchar(TOP_BOTTOM);
		col += 1;
	}
	ft_putchar('\n');
}

void	print_inner_row(int x)
{
	int	col;

	col = 0;
	while (col < x)
	{
		if (col == 0 || col == x - 1)
			ft_putchar(LEFT_RIGHT);
		else
			ft_putchar(' ');
		col += 1;
	}
	ft_putchar('\n');
}

void	print_inner_rows(int x, int y)
{
	while (y--)
		print_inner_row(x);
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	print_first_row(x);
	if (y >= 3)
		print_inner_rows(x, y - 2);
	if (y >= 2)
		print_last_row(x);
}
