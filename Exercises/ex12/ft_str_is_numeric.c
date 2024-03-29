/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:34:34 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/03 22:41:53 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NUMER(c) (c >= '0' && c <= '9' ? 1 : 0)

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str == 0)
		return (1);
	while (str[i])
	{
		if (!(NUMER(str[i])))
			return (0);
		i++;
	}
	return (1);
}
