/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsilva-c <rsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:10:56 by rsilva-c          #+#    #+#             */
/*   Updated: 2023/02/05 15:56:35 by rsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_output(int tamanho, char FL, char ML, char LL)
{
	int	arrguardar;

	arrguardar = 1;
	while (arrguardar <= tamanho)
	{
		if (arrguardar == 1)
		{
			ft_putchar(FL);
		}
		else if (arrguardar == tamanho)
		{
			ft_putchar(LL);
		}
		else
		{	
			ft_putchar(ML);
		}
		arrguardar++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	sum_linha;

	sum_linha = 1;
	if (x >= 1 && y >= 1)
	{
		while (sum_linha <= y)
		{
			if (sum_linha == 1)
			{
				ft_output(x, 'o', '-', 'o');
			}
			else if (sum_linha == y)
			{
				ft_output(x, 'o', '-', 'o');
			}
			else
			{
				ft_output(x, '|', ' ', '|');
			}
			sum_linha++;
		}
	}
}
