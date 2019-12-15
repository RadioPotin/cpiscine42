/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:52:24 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/06 11:38:01 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	while (s1[i] == s2[i] && (s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] - s2[i] == 0)
			i++;
		if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] + s2[i]);
	}
	return (0);
}
