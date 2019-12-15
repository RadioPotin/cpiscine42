/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 07:26:51 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/13 23:04:38 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int j;

	j = 0;
	while (tab[j])
	{
		if (f(tab[j]) == 1)
			return (1);
		j++;
	}
	return (0);
}
