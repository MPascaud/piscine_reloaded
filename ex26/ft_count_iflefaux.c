/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:24:52 by mpascaud          #+#    #+#             */
/*   Updated: 2017/11/09 18:21:14 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int		fonction(int nb)
{
	return (1);
}

int		ft_count_if(char **tab, int(*f)(char*))
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			nb++;
		}
		i++;
	}
	return(nb);
}


int		main(void)
{
	char	**tab;

	tab[0]="34";
	tab[1]="rlvvnr1";
	tab[2]="3evev5";
	tab[3]="3178ere84";
	tab[4]="er1";
	ft_count_if(*tab, &fonction(tab
	return (0);
}













