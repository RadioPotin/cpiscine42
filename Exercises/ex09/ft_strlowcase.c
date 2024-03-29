/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 11:53:20 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/05 14:26:11 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i])
	{
		if (str[i] <= 64 || (str[i] >= 91 && str[i] <= 96) || str[i] >= 124)
			i++;
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
	}
	return (str);
}
