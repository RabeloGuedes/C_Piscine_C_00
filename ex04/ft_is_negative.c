/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:04:23 by arabelo-          #+#    #+#             */
/*   Updated: 2023/03/03 11:35:53 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ans;

	if (n >= 0)
	{
		ans = 'P';
		write(1, &ans, 1);
	}
	if (n < 0)
	{
		ans = 'N';
		write(1, &ans, 1);
	}
}