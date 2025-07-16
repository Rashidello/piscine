/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 02:47:28 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/13 03:14:36 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (i != col && grid[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (i != row && grid[i][col] == num)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
