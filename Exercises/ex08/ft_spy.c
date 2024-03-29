/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:39:01 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/07 15:13:53 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include <unistd.h>

char	*ft_strstr_mod(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (to_find[k] == 0)
		return (str);
	while (to_find[k] != '\0')
		k++;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j] || to_find[j] == str[i + j] + 32)
		{
			if (j == k - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		if (ft_strstr_mod(av[i], "president"))
			write(1, "Alert!!!\n", 9);
		if (ft_strstr_mod(av[i], "attack"))
			write(1, "Alert!!!\n", 9);
		if (ft_strstr_mod(av[i], "Bauer"))
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return (0);
}
