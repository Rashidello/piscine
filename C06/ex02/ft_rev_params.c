/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 06:03:10 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/08 03:51:56 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;
	int	l;

	l = 1;
	arc = arc - 1;
	while (arc >= l)
	{
		i = 0;
		while (arv[arc][i] != '\0')
		{
			write (1, &arv[arc][i], 1);
			i++;
		}
		write (1, "\n", 1);
		arc--;
	}
}
