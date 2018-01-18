/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rangelefaux.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:49:05 by mpascaud          #+#    #+#             */
/*   Updated: 2017/11/10 15:30:40 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
	{
		return (0);
	}
	if (!(tab = (int*)malloc(sizeof(*tab) * (max - min))))
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	printf ("%d", tab[0]);
	printf ("%d", tab[1]);
	printf ("%d", tab[2]);
	printf ("%d", tab[3]);
	printf ("%d", tab[4]);
	return (tab);

}

int		main(void)
{
	int		min;
	int		max;

	min = 5;
	max = 8;
	ft_range(min, max);
	return (0);
}









