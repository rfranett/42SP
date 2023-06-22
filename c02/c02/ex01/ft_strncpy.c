/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:13:10 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/08 10:16:48 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
		dest[count++] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char src[] = "Victor";
	char dest[] = "sdoandioansodinaoidnsa";
	char result[1];
	printf("%s", ft_strncpy(dest, src, 20));
	return (0);
}