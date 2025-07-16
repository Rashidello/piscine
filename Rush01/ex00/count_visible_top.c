/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible_top.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 02:44:03 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/13 03:14:23 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_top(int grid[4][4], int col)
{
	int	count;
	int	max_height;
	int	i;

	count = 1;
	max_height = grid[0][col];
	i = 1;
	while (i < 4)
	{
		if (grid[i][col] > max_height)
		{
			count++;
			max_height = grid[i][col];
		}
		i++;
	}
	return (count);
}
