/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 07:54:36 by arabelo-          #+#    #+#             */
/*   Updated: 2023/03/06 13:04:13 by arabelo-         ###   ########.fr       */
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
	while (controller <= n)
	{
		index = controller + 1;
		while (index <= n)
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
