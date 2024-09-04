/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_upperx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokamura <yokamura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:23:48 by yokamura          #+#    #+#             */
/*   Updated: 2023/04/03 19:33:55 by yokamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_convert_dix_to_upperseize(int mod)
{
	if (mod > 9)
		return (mod - 10 + 'A');
	else
		return (mod + '0');
}

int	ft_put_hexupper_extra(unsigned int n, int res)
{
	int		div;
	int		mod;

	div = n / 16;
	mod = n % 16;
	if (div != 0)
		res = ft_put_hexupper_extra(div, res);
	res += ft_putchar(ft_convert_dix_to_upperseize(mod));
	return (res);
}

int	ft_put_hexupper(unsigned int n)
{
	int	res;

	res = 0;
	res += ft_put_hexupper_extra(n, res);
	return (res);
}
