/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 07:54:36 by arabelo-          #+#    #+#             */
/*   Updated: 2023/03/05 10:38:18 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n)
{
	int	index;
	int	controller;

	index = 1;
	controller = 0;
	while (controller <= 8)
	{
		index = controller + 1;
		while (index <= 9)
		{
			ft_putchar(controller + 48);
			ft_putchar(index + 48);
			ft_putchar(',');
			ft_putchar(' ');
			index++;
		}
		controller++;
	}
}

void	ft_print_combn(int n)
{
	int	index;

	index = 0;
	if (n >= 1 && n < 10)
	{
		ft_print(n);
	}
}
