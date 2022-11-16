/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelaez- <rpelaez-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:40:01 by rpelaez-          #+#    #+#             */
/*   Updated: 2022/11/06 15:45:23 by rpelaez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char	dest[] = "";
	char	src[] = "Mia!";
	printf("%s \n %s \n", dest, src);
	ft_strcpy(dest,src);
	printf ("%s \n %s \n", dest, src);
	return(0);
}*/
