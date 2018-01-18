/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmplefaux.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:37:04 by mpascaud          #+#    #+#             */
/*   Updated: 2017/11/07 17:55:19 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i] || s2[i] < s1[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char	*blabla;
	char	*bloublou;

	blabla = "blablca";
	bloublou = "blabla";
	printf("%d", ft_strcmp(blabla, bloublou));
	return (0);
}
