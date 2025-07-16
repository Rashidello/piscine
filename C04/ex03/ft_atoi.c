/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 00:34:38 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/07 06:56:33 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	k;
	int	nc;
	int	end;

	k = 0;
	while ((str[k] >= 9 && str[k] <= 13) || str[k] == 32)
		k++;
	nc = 0;
	while (str[k] == '+' || str[k] == '-')
	{
		if (str[k] == '-')
			nc++;
		k++;
	}
	end = 0;
	while (str[k] >= 48 && str[k] <= 57)
	{
		end = end * 10 + (str[k] - '0');
		k++;
	}
	if (nc % 2 == 1)
		end = -end;
	return (end);
}
