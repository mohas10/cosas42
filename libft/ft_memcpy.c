/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagna <msagna@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:04:00 by msagna            #+#    #+#             */
/*   Updated: 2022/11/24 21:26:17 by msagna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.c"

void	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i = 0;
	unsigned	char *dst2;
	unsigned	char *src2;
	
	dst2 = (unsigned char*) dst;
	src2 = (unsigned char*) src;
	while	(i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (0);
}
