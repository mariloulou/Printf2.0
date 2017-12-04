/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:26:35 by mcassar           #+#    #+#             */
/*   Updated: 2017/12/04 11:05:01 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list list;

	t_v.i = 0;
	t_v.ret = 0;
	t_v.f = format;
	t_v.flags = ".#-+ 0123456789";
	va_start(list, format);
	while (t_v.f[t_v.i])
	{
		if (t_v.f[t_v.i] == '%')
			ft_whattodo(list);
		else
			ft_putchar(t_v.f[t_v.i]);
		t_v.i++;
	}
	return (t_v.ret);
}
