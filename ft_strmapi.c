/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:43:21 by avenonat          #+#    #+#             */
/*   Updated: 2019/09/13 00:51:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*str;

	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
