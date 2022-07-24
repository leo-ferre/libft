/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoferre <leoferre@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:54:00 by leoferre          #+#    #+#             */
/*   Updated: 2022/04/27 16:15:55 by leoferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*buffer;

	buffer = NULL;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			buffer = (char *)&s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (buffer);
}
