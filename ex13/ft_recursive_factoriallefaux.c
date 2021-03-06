/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:37:22 by mpascaud          #+#    #+#             */
/*   Updated: 2017/11/07 15:50:21 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));



}




int		main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}








