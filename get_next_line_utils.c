/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:23:58 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/11/23 18:12:20 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;
	char			*cpy;

	cpy = (char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (cpy[i])
	{
		if ((unsigned char)cpy[i] == uc)
			return (&cpy[i]);
		i++;
	}
	if (uc == '\0')
		return (&cpy[i]);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	total_len;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc(total_len + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joined[i] = s2[j++];
		i++;
	}
	joined[total_len] = '\0';
	return (joined);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*p;
	size_t			total_size;
	size_t			i;
	unsigned char	*s;

	if (nmemb == 0 || size == 0)
		total_size = 0;
	else
	{
		if (nmemb > INT_MAX / size)
			return (NULL);
		total_size = nmemb * size;
	}
	p = malloc(total_size);
	if (!p)
		return (NULL);
	s = (unsigned char *)p;
	i = 0;
	while (i < total_size)
		s[i++] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
