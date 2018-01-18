/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:06:11 by mpascaud          #+#    #+#             */
/*   Updated: 2017/11/07 15:32:55 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>


int		ft_iterative_factorial(int nb)
{
	int		i;
	int		fact;

	i = 1;
	fact = 1;
	if (nb <= 0 || nb > 12)
	{
		if (nb == 0)
		{
			return (1);
		}
		return (0);
	}

	while (i <= nb)
	{
		fact = fact * i;
		i += 1;
	}
	return (fact);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}






