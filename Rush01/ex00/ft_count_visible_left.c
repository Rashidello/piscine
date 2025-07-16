/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_visible_left.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 02:38:49 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/13 03:14:26 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_left(int grid[4][4], int row)
{
	int	count;
	int	max_height;
	int	i;

	max_height = grid[row][0];
	count = 1;
	i = 1;
	while (i < 4)
	{
		if (grid[row][i] > max_height)
		{
			count++;
			max_height = grid[row][i];
		}
		i++;
	}
	return (count);
}
