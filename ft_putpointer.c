
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
