/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible_bottom.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 02:45:13 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/13 03:14:18 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_bottom(int grid[4][4], int col)
{
	int	count;
	int	max_height;
	int	i;

	count = 1;
	max_height = grid[3][col];
	i = 2;
	while (i >= 0)
	{
		if (grid[i][col] > max_height)
		{
			count++;
			max_height = grid[i][col];
		}
		i--;
	}
	return (count);
}
