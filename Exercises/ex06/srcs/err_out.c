/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_out.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:46:53 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/13 16:29:52 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	err_out(int err)
{
	if (err == 1)
		write(1, "Stop : division by zero\n", 24);
	if (err == 0)
		write(1, "Stop : modulo by zero\n", 22);
}
