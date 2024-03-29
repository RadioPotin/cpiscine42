/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 01:30:22 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/10 02:59:06 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MIN(c) (c >= 'a' && c <= 'z' ? 1 : 0)
#define MAJ(c) (c >= 'A' && c <= 'Z' ? 1 : 0)

int		ft_str_is_alpha(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!MAJ(*str) && !MIN(*str))
			return (0);
		str++;
	}
	return (1);
}
