/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:48:40 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/05 14:26:59 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRNT(c) (c >= 33 || c == 127 ? 1 : 0)

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str == 0)
		return (1);
	while (str[i])
	{
		if (!(PRNT(str[i])))
			return (0);
		i++;
	}
	return (1);
}
