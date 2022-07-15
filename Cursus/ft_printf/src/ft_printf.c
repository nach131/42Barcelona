/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:40:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/15 20:40:40 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// #include <stdarg.h>
// #include <unistd.h>

#include "ft_printf.h"
#include "libft.h"

typedef struct s_sc
{
	int	len;
	int	widht;

}							t_sc;

int ft_intlen(int nb, char c)
{
	int i = 0;
	int	number;
	int	neg;

	if (!nb)
		return(1);
	if (nb < 0)
	{
		neg = 1;
		number = -nb;
	}
	else
	{
		neg = 0;
		number = nb;
	}

	if (c == 'd')
	{
		while (number)
		{
			number /= 10;
			i++;
		}
		return (i + neg);
	}
	if (c == 'x')
	{
		while (number)
		{
			number /= 16;
			i++;
		}
		return (i);
	}
	return (0);
}

void	ft_printhexa(unsigned int x)
{
	char *hexa = "0123456789abcdef";
	int res[100];
	int i = 0;

	while (x >= 16)
	{
		res[i] = hexa[x % 16];
		x = x / 16;
		i++;
	}
	res[i] = hexa[x];
	while (i >= 0)
	{
		ft_putchar_fd(res[i], 1);
		i--;
	}
}

const	char	*ft_search_arg(va_list arg, const char *format, t_sc *sc)
{
	if (*format == 'd')
	{
		int d = va_arg(arg, int);
		ft_putnbr_fd(d, 1);
		sc->len += ft_intlen(d, *format);
	}
	else if (*format == 's')
	{
		char *s = va_arg(arg, char *);
		if (!s)
		{
			write(1, "(NULL", 6);
			sc->len += 6;
		}
		else
		{
			ft_putstr_fd(s, 1);
			sc->len += ft_strlen(s);
		}
	}
	else if (*format == 'x')
	{
		unsigned int x = va_arg(arg, unsigned int);
		ft_printhexa(x);
		sc->len += ft_intlen((int)x, *format);
	}
	else
		return (NULL);
	format++;
	return (format);
}

const	char	*ft_read_text(t_sc *sc, const char *format)
{
	char	*next;

	next = ft_strchr(format, '%');
	if (next)
		sc->widht = next - format;
	else
		sc->widht = ft_strlen(format);
	write(1, format, sc->widht);
	sc->len += sc->widht;
	while (*format && *format != '%')
		++format;
	return (format);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	va_start(arg, format);
	t_sc	sc;
	sc.len = 0;
	sc.widht = 0;

	while (*format)
	{
		if (*format == '%')
			format = ft_search_arg(arg, format + 1, &sc);
		else
			format = ft_read_text(&sc, format);
		if (!format)
		{
			write(1, "(null)", 6);
			va_end(arg);
			return (sc.len);
		}
	}
	va_end(arg);
	return (sc.len);
}