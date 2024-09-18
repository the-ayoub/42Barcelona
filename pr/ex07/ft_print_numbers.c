/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:25:17 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/09/09 19:35:26 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	numbres;

	numbres = '0';
	while (numbres <= '9')
	{
		ft_putchar(numbres);
		numbres++;
	}
}
