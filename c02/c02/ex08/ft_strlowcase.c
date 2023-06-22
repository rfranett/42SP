/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:15:57 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/11 15:43:41 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			str[c] += 32;
		c++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
    char    name2[] = "AAALDKDSPAKDP23161236521a";
    printf("%s", ft_strlowcase(name2));
}