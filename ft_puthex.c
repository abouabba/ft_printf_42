/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:03:37 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/27 01:52:49 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb)
{
	int		count;
	char	*x;

	count = 0;
	x = "0123456789abcdef";
	if (nb >= 16)
		count += ft_puthex(nb / 16);
	count += ft_putchar(x[nb % 16]);
	return (count);
}
