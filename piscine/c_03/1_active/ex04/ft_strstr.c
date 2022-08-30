/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiosdad <jdiosdad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:56:51 by jdiosdad          #+#    #+#             */
/*   Updated: 2022/08/30 18:22:41 by jdiosdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;

	index = 0;
	if (*to_find == '\0')
		return (str);
	while (str[index])
	{
		while (str[index])			// nowhere
		{
			while (str[index])		// found
			{
				index++;
			}
			index++;
		}
		index++;
	}
	return (str);
}
