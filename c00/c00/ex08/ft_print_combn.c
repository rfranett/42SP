/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:59:21 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/08 13:15:08 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_rec(int n, int start, char *comb, char next_digit)
{
	if (n == 0)
	{
		write(1, comb, start);
		if (comb[0] != '9' - (start - 1))
			write(1, ", ", 2);
		return ;
	}
	while (next_digit <= '9')
	{
		comb[start] = next_digit;
		ft_print_combn_rec(n - 1, start + 1, comb, next_digit + 1);
		next_digit++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n > 0 && n < 10)
		ft_print_combn_rec(n, 0, comb, '0');
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	return (0);
// }
