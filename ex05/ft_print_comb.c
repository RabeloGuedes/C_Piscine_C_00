/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:22:32 by arabelo-          #+#    #+#             */
/*   Updated: 2023/03/05 12:20:55 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char string)
{
	write(1, &string, 1);
}

void	ft_result(char a, char b, char c)
{
	char	comma;

	comma = ',';
	ft_printchar(a);
	ft_printchar(b);
	ft_printchar(c);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		ft_printchar(comma);
		ft_printchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				ft_result(x, y, z);
				z++;
			}
			z = y + 1;
			y++;
		}
		y = x + 1;
		x++;
	}
}
