/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:03:56 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/07 15:22:06 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int max;

	max = 0;
	i = 0;
	while (i < length && tab)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}