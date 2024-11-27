/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:46:24 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/27 01:50:43 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long type)
{
	int		count;
	char	*x;

	count = 0;
	x = "0123456789abcdef";
	if (type >= 16)
		count += ft_putpointer(type / 16);
	count += ft_putchar(x[type % 16]);
	return (count);
}
