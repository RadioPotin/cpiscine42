/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 07:37:06 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/17 09:51:08 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			cnt++;
		i++;
	}
	return (cnt);
}
