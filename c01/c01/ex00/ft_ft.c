/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:34:00 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/11 17:52:33 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
	return (0);
}

void	ft_ft(int *nbr)

{
	*nbr = 42;
}
