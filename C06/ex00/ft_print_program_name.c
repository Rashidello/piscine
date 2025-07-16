/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 04:57:26 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/08 21:14:39 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;

	i = 0;
	while (arc != 0)
		arc--;
	while (arv[arc][i])
	{
		write (1, &arv[0][i++], 1);
	}
	write(1, "\n", 1);
}
