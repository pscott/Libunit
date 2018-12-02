/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fw_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 07:42:50 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/07 11:31:30 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		fw_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
