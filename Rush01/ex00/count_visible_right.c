/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible_right.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 02:42:54 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/13 03:14:21 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_right(int grid[4][4], int row)
{
	int	count;
	int	max_height;
	int	i;

	count = 1;
	max_height = grid[row][3];
	i = 2;
	while (i >= 0)
	{
		if (grid[row][i] > max_height)
		{
			count++;
			max_height = grid[row][i];
		}
		i--;
	}
	return (count);
}
