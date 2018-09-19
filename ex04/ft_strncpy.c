/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 21:09:10 by staminh           #+#    #+#             */
/*   Updated: 2018/09/18 14:32:21 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
		return (dest);
	}
	while (dest[i + j] != '\0')
		j = j + 1;
	if (dest[i + j] == '\0')
	{
		dest[i + j] = '\0';
		return (dest);
	}
	dest[i + j] = '\0';
	return (dest);
}
