/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagna <msagna@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:04:00 by msagna            #+#    #+#             */
/*   Updated: 2023/03/30 16:47:53 by msagna           ###   ########.fr       */
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
