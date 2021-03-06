/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fw_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 21:08:15 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/14 13:03:44 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fw_str_is_numeric(char *s)
{
	if (!*s)
		return (1);
	while (*s >= 48 && *s <= 57)
	{
		++s;
		if (!*s)
			return (1);
	}
	return (0);
}
