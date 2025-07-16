/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:31:22 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/15 21:42:54 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	mid;
	char	last;

	first = '0';
	while (first <= '7')
	{
		mid = first + 1;
		while (mid <= '8')
		{
			last = mid + 1;
			while (last <= '9')
			{
				write(1, &first, 1);
				write(1, &mid, 1);
				write(1, &last, 1);
				write(1, ", ", 2);
				last++;
			}
			mid++;
		}
		first++;
	}
}
