
#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	unsigned long	p;
	int				count;
 
	count = 0;
	if (specifier == 'c')
		count += ft_putchar ((char)va_arg(ap, int));
	else if (specifier == 's')
		count += ft_putstr (va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr (va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_putunsigned (va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_puthex (va_arg(ap, unsigned int));
	else if (specifier == 'X')
		count += ft_puthexupper(va_arg(ap, unsigned int));
	else if (specifier == 'p')
	{
		count += write (1, "0x", 2);
		p = (unsigned long)va_arg(ap, void *);
		count += ft_putpointer(p);
	}
	else
		count += ft_putchar(specifier);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list		ap;
	int			count;

	count = 0;
	va_start(ap, s);
	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			if (*s == '%')
				count += write(1, "%", 1);
			else if (*s == '\0')
				break ;
			else
				count += print_format(*s, ap);
		}
		else
			count += write(1, s, 1);
		s++;
	}
	va_end(ap);
	return (count);
}
