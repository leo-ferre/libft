/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoferre <leoferre@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:54:54 by leoferre          #+#    #+#             */
/*   Updated: 2022/05/02 02:33:25 by leoferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	new = (char *)malloc(sizeof(char) * (i + 1));
	if (new == NULL)
		return (NULL);
	new = ft_memcpy(new, s1, i);
	new[i] = '\0';
	return (new);
}
