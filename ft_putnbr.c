/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:28:55 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/26 23:57:46 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_helper(long n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		ft_putnbr_helper(n);
	}
	else if (n > 9)
	{
		ft_putnbr_helper(n / 10);
		ft_putnbr_helper(n % 10);
	}
	else
	{
		c = n + 48;
		write(1, &c, 1);
	}
}

int	n_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	ft_putnbr_helper((long)n);
	return (n_len((long)n));
}
