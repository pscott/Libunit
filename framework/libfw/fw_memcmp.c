/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fw_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:49:22 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/15 15:35:20 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfw.h"

int		fw_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	i = 0;
	p_s1 = (unsigned char*)s1;
	p_s2 = (unsigned char*)s2;
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		++i;
	}
	return (0);
}
