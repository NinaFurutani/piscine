/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:17:21 by gfurutan          #+#    #+#             */
/*   Updated: 2023/02/23 22:24:33 by gfurutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	resto;
	i = 0;
	sinal = 1;
	resto = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sinal = sinal * -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resto = (resto * 10) + (str[i] - 48);
		i++;
	}
	return (resto * sinal);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("  -----+--1294ab567"));

}*/
