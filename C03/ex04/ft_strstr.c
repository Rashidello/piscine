/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:31:04 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/06 18:12:51 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (to_find[k] != '\0' && str[i + k] == to_find[k])
			k++;
		if (to_find[k] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
