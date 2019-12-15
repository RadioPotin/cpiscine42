/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:17:20 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/18 01:38:49 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

void		ft_div(int nb1, int nb2)
{
	if (nb2 == 0)
	{
		err_out(1);
		return ;
	}
	ft_putnbr(nb1 / nb2);
	ft_putchar('\n');
	return ;
}
