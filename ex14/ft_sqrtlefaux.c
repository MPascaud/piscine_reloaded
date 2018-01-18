/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtlefaux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:57:10 by mpascaud          #+#    #+#             */
/*   Updated: 2017/11/07 16:13:08 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>




int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}




int		main(void)
{
	printf("%d", ft_sqrt(-5));
	return (0);
}










