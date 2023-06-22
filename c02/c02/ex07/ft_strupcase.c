/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:15:48 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/11 15:41:39 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] -= 32;
		c++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	name2[];

	name2[] = "1sdaa23161236521a";
	printf("%s", ft_strupcase(name2));
}
#include <stdio.h>

int	main(void)
{
	char name2[] = "1sdaa23161236521a";
	printf("%s", ft_strupcase(name2));
}
