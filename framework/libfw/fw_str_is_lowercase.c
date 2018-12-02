/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fw_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 21:14:29 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/14 13:03:10 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fw_str_is_lowercase(char *s)
{
	if (!*s)
		return (1);
	while (*s >= 97 && *s <= 122)
	{
		++s;
		if (!*s)
			return (1);
	}
	return (0);
}