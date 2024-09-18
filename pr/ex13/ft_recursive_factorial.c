/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:53:18 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/10 12:17:40 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0 && nb < 13)
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
	return (0);
}
/*int main (void)
{
	printf("%d",ft_recursive_factorial (13));
}*/
