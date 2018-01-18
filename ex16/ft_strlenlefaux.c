/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenlefaux.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:35:02 by mpascaud          #+#    #+#             */
/*   Updated: 2017/11/07 16:48:02 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		main(void)
{
	char	*str;

	str = "bloublou";
	printf("%d", ft_strlen(str));
	return (0);
}
