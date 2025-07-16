/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarayano <rarayano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 04:11:11 by rarayano          #+#    #+#             */
/*   Updated: 2025/07/14 19:55:47 by rarayano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_cat(int *i, char *dest, char *src)
{
	int	b;
	int	l;

	b = 0;
	l = 0;
	while (src[l])
	{
		dest[*i] = src[l];
		(*i)++;
		l++;
	}
}

char	*nothing(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

int	total(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len = total_len + ft_strlen (strs[i]);
		i++;
	}
	total_len = total_len + (size - 1) * ft_strlen(sep);
	total_len = total_len + 1;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	int		pos;
	char	*result;

	if (size == 0)
		return (nothing());
	total_len = total(size, strs, sep);
	result = malloc(total_len);
	pos = 0;
	i = 0;
	while (i < size)
	{
		ft_cat (&pos, result, strs[i]);
		if (i < size - 1)
		{
			ft_cat (&pos, result, sep);
		}
		i++;
	}
	result[pos] = '\0';
	return (result);
}
