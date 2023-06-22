/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:15:02 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/10 19:53:28 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] > 96 && str[count] < 123))
			return (0);
		count++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_str_is_lowercase("AaB"));
// 	printf("%d", ft_str_is_lowercase(""));
// 	printf("%d", ft_str_is_lowercase("aaaaaeeeq"));
// }