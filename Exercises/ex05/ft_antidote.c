/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:35:45 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/07 15:17:09 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((j < i && j > k) || (j < k && j > i))
		return (j);
	else if ((k < i && k > j) || (k < j && k > i))
		return (k);
	else if ((i < j && i > k) || (i < k && i > j))
		return (i);
	else
		return (j);
}