/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurutan <gfurutan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:52:21 by gfurutan          #+#    #+#             */
/*   Updated: 2023/02/09 10:32:34 by gfurutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b)
{
	if (a != b)
	{
		ft_putchar((a / 10) + 48);
		ft_putchar((a % 10) + 48);
		write(1, " ", 1);
		ft_putchar((b / 10) + 48);
		ft_putchar((b % 10) + 48);
		if (a != 98)
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print (a, b);
		b++;
		}
	a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
