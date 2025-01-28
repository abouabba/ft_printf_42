
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
