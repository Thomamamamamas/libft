/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:30:21 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/05 18:24:55 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_word(char const *s, char c)
{
	int	n;
	int	res;
	int	start_count;

	n = 0;
	res = 0;
	start_count = 0;
	while (s[n])
	{
		if (s[n] != c && start_count == 0)
			start_count = 1;
		if (s[n] == c && start_count == 1)
			res++;
		n++;
	}
	return (res);
}

static int	get_word_lenght(char const *s, char c, int n)
{
	int	start;
	int	end;

	start = n;
	end = n;
	while (s[end] != c)
		end++;
	return (end - start);
}

static int	get_word_index(char const *s, char c, int word)
{
	int	n;
	int	m;
	int	start_count;

	n = 0;
	m = 0;
	start_count = 0;
	while (s[n] && m < word)
	{
		if (s[n] != c && start_count == 0)
			start_count = 1;
		else if (s[n] == c && s[n + 1] != c && start_count == 1)
		{
			n = n  + get_word_lenght(s, c, n + 1);
			m++;
		}
		n++;
	}
	return (n);
}

static int	malloc_word(char const *s, char c, int word, char **table)
{
	int	n;
	int	m;

	n = get_word_index(s, c, word);
	m = get_word_lenght(s, c, n);
	*table[word] = *((char *)malloc(sizeof(char) * (m + 1)));
	return (1);
}

static void	put_in_table(char const *s, char c, char **table, int word)
{
	int	n;

	n = get_word_index(s, c, word);
	while (s[n] != c)
	{
		*table[word] = s[n];
		n++;
	}
}

char		**ft_split(char const *s, char c)
{
	int		word;
	int		n;
	char	**table;

	if(!s)
		return (NULL);
	word = count_word(s, c);
	table = (char **)malloc(sizeof(char *) * word + 1);
	if (!table)
		return (NULL);
	table[word + 1] = NULL; 
	n = 0;
	while (n <= word)
	{
		malloc_word(s, c, n, table);
		put_in_table(s, c, table, n);
		n++;
	}
	n = 0;
	return (table);
}

#include <stdio.h>

int	main()
{
	const char	s[] = "abcdafghaaaaijaklamnaaaaa";
	char		c = 'a';
	char		**table;

	table = ft_split(s, c);
	printf("%s\n", table[0]);
	return (0);
}
