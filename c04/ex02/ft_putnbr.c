/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:09:22 by gfurutan          #+#    #+#             */
/*   Updated: 2023/02/23 20:46:23 by gfurutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if(n < 10)
	{
		ft_putchar(n + 48);
	}
	if (n > 9 )
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

/*int main (void)
{
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr();
	ft_putnbr(-2147483648);
	printf("\n");
	return(0);
}*/
