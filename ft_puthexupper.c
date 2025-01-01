/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:51:05 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/27 01:53:30 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(unsigned int nb)  
{
	int		count;
	char	*x;

	count = 0;
	x = "0123456789ABCDEF";
	if (nb >= 16)
		count += ft_puthexupper(nb / 16);
	count += ft_putchar(x[nb % 16]);
	return (count);
}
