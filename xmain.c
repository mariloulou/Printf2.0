/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 09:33:46 by mcassar           #+#    #+#             */
/*   Updated: 2017/12/01 12:08:01 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "includes/libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int ret1;
	int ret2;

	ret1 = printf("%10s is a string|\n", "this");
	ret2 = ft_printf("%10s is a string|\n", "this");
	printf("||%d||%d||\n", ret1, ret2);
	ret1 = printf("%5.2s is a string|\n", "this");
	ret2 = ft_printf("%5.2s is a string|\n", "this");
	printf("||%d||%d||\n", ret1, ret2);
}
