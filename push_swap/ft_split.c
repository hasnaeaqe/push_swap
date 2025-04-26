/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:26:43 by haqajjef          #+#    #+#             */
/*   Updated: 2025/03/02 10:25:07 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static char	*ft_strndup(const char *s1, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_malloc((n + 1) * sizeof(char));
	while (i < n)
	{
		str[i] = s1[i];
		i++;
	}
	str[n] = '\0';
	return (str);
}

static char	**cr_word(char const *s, char c, char **result)
{
	int	i;
	int	d;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		d = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		result[k] = ft_strndup(s + d, i - d);
		k++;
	}
	result[k] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	result = ft_malloc((ft_count(s, c) + 1) * sizeof(char *));
	result = cr_word(s, c, result);
	return (result);
}
