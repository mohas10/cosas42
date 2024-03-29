/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagna <msagna@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:09:55 by msagna            #+#    #+#             */
/*   Updated: 2023/03/30 16:31:05 by msagna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h> //para el size_t

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	unsigned char	c2;
	unsigned char*	b2;

	i = 0;
	c2 = c;
	b2 = b;
	while (i < len)
	{
		b2[i] = c2;
		i++;
	}
}
