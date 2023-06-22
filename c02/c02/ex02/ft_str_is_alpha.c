/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:13:51 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/08 10:14:17 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 'a' && str[c] <= 'z' || str[c] >= 'A' && str[c] <= 'Z'))
			return (0);
		c++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_alpha("123z2341"));
	printf("%d", ft_str_is_alpha(""));
	printf("%d", ft_str_is_alpha("aaBBzZ"));
}