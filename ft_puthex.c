
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
