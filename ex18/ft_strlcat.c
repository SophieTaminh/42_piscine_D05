/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:49:42 by staminh           #+#    #+#             */
/*   Updated: 2018/09/18 16:44:43 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i = i + 1;
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j = j + 1;
	}
	dest[i + j] = '\0';
	return (*dest);
}
