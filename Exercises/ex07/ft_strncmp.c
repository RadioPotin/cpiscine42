/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 00:47:27 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/10 13:21:42 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (*s1 != *s2)
		return (*s1 - *s2);
	while (*s1 && *s2 && i < n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
		}
		else if (*s2 > *s1)
			return (*s1 - *s2);
		if (*s1 > *s2)
			return (*s1 + *s2);
	}
	return (0);
}
