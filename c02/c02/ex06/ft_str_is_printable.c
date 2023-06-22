/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:15:36 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/11 15:43:14 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 32 && str[count] <= 126))
			return (0);
		count++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_str_is_printable("\0\b\a"));
	printf("%d", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable("QZA"));
}