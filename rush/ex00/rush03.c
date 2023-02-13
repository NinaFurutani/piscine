/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucarval <rucarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:02:09 by rucarval          #+#    #+#             */
/*   Updated: 2023/02/04 16:06:09 by rucarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_output(int tamanho, char FL, char ML, char LL)
{
    int arrguardar;
    
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

void rush(int x, int y)
{
    int sum_linha;

    sum_linha = 1;

    if (x >= 1 && y >= 1)
    {
        while (sum_linha <= y)
        {
            if (sum_linha == 1)
            {
                ft_output(x, 'A', 'B', 'C');
            }
            else if (sum_linha == y)
            {
                ft_output(x, 'A', 'B', 'C');
            }
            else
            {
                ft_output(x, 'B', ' ', 'B');
            }
            sum_linha++;
        }
    }
}
