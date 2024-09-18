/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:32:24 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/11 19:42:32 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	if (min >= max)
		return (NULL);
	dest = malloc ((max - min) * sizeof(int));
	if (!dest)
		return (NULL);
	i = 0;
	while (max > min)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
