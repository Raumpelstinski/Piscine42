/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelaez- <rpelaez-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:18:05 by rpelaez-          #+#    #+#             */
/*   Updated: 2022/11/06 15:44:15 by rpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
	unsigned	int n;
	char dest[] = "superescalifragilisticoespialidoso";
	char src[] = "qqqq";

	n = 4;
	ft_strncpy(dest, src, 4);
	printf("%s \n %s \n", dest, src);
	return(0);
}*/
