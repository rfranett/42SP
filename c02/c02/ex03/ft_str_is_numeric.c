/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:14:36 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/08 10:14:41 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] > 47 && str[count] < 58))
			return (0);
		count++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_str_is_numeric("12312341"));
	printf("%d", ft_str_is_numeric(""));
	printf("%d", ft_str_is_numeric("1ab1231231"));
}