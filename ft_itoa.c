/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoferre <leoferre@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:46:29 by leoferre          #+#    #+#             */
/*   Updated: 2022/04/29 16:50:35 by leoferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	str_char(char *alpha, int n, size_t size)
{
	alpha[size] = '\0';
	if (n >= 0)
	{
		while (size--)
		{
			alpha[size] = (n % 10) + '0';
			n = n / 10;
		}
	}
	else
	{
		while (size--)
		{
			alpha[size] = (n % 10) * -1 + '0';
			n = n / 10;
		}
		alpha[0] = '-';
	}
}

char	*ft_itoa(int n)
{
	int		i;
	size_t	size;
	char	*alpha;

	if (n >= 0)
		size = 1;
	else
		size = 2;
	i = n / 10;
	while (i)
	{
		size++;
		i = i / 10;
	}
	alpha = (char *)malloc(size + 1);
	if (alpha == NULL)
		return (NULL);
	str_char(alpha, n, size);
	return (alpha);
}
