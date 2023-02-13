/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:45:38 by gfurutan          #+#    #+#             */
/*   Updated: 2023/02/08 19:48:36 by gfurutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	
	a = '0';
	while (a <= 99)
	{
		b = a + 1;
		while (b <=99)
		{
			if( a != b)
			{
			ft_putchar((a / 10) + '0');
                	ft_putchar((a % 10) + '0');
                	write(1, &a, 1);
                	write(1, " ", 1);
                	ft_putchar((b / 10) + '0');
                	ft_putchar((b % 10) + '0');
			write(1, &b, 1);
			}
			if (a != 98)
			{
				write(1, ", ", 2);	
			}	
			b++;
		}
	a++;
	}
}
int main(void)
{
	
	ft_print_comb2();
	return(0);
}
