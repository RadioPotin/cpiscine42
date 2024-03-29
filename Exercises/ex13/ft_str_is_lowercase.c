/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:37:10 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/05 14:26:45 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MINUS(c) (c >= 'a' && c <= 'z' ? 1 : 0)

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (str == 0)
		return (1);
	while (str[i])
	{
		if (!(MINUS(str[i])))
			return (0);
		i++;
	}
	return (1);
}
