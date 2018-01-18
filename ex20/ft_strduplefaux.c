/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strduplefaux.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:55:36 by mpascaud          #+#    #+#             */
/*   Updated: 2017/11/07 20:24:50 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if(!(str = (char*)malloc(sizeof(*str) * i)))
	{
		return(0);
	}
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		main(void)
{
	char	*blabla;

	blabla = "blablablop";
	printf ("%s", ft_strdup(blabla));
	return (0);
}





