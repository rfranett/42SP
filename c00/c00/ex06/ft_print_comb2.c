/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:30:44 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/08 13:13:39 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_change_to_char(int x)
{
	char	tens;
	char	ones;

	tens = (x / 10) + 48;
	ones = x % 10 + 48;
	write(1, &tens, 1);
	write(1, &ones, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_change_to_char(i);
			write(1, " ", 1);
			ft_change_to_char(j);
			if (i != 98 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
