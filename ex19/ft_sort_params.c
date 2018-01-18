/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_paramslefaux.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:45:56 by mpascaud          #+#    #+#             */
/*   Updated: 2017/11/07 19:30:18 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] < str2[i] || str1[i] > str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = argc - 1;
	while (i > 0)
	{
		if (ft_strcmp(argv[i], argv[i - 1]) < 0)
		{
			ft_swap(&argv[i - 1], &argv[i]);
			i = argc;
		}
		i--;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
