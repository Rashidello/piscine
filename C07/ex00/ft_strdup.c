/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:23:20 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/14 22:36:56 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int		len;
	int		i;
	char	*dest;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	dest = malloc ((4) * (len +1));
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
