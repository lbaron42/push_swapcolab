/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PS_LLutils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrizakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:48:26 by mrizakov          #+#    #+#             */
/*   Updated: 2023/04/08 18:48:28 by mrizakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}


int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	}
	else
	{
		return (0);
	}
	return (1);
}

int ft_isdigit2(const char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(!ft_isdigit(str[i]))
			return (-1);
		i++;
	}
	return(0);
}

char	**ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
	return (NULL);
}

int	ft_word_count(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

int	ft_size_word(const char *s, char c, int i)
{
	int	word_size;

	word_size = 0;
	while (s[i] != c && s[i])
	{
		word_size++;
		i++;
	}
	return (word_size);
}

size_t ft_strlen(const char *str)
{
	size_t    counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	unsigned int	str_len;
	unsigned int	correct_size;

	i = 0;
	str_len = ft_strlen((char *)s);
	correct_size = 1;
	if (start > str_len || len == 0)
		correct_size = 1;
	else if (len <= str_len - start)
		correct_size = len + 1;
	else if (len > str_len - start)
		correct_size = str_len - start + 1;
	substr = malloc(correct_size * sizeof(char));
	if (!substr)
		return ((void *) NULL);
	while (i != correct_size - 1)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	word_count;
	unsigned int	i;
	unsigned int	len;
	unsigned int	y;

	word_count = ft_word_count(s, c);
	y = -1;
	i = 0;
	array = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (++y < word_count)
	{
		while (s[i] == c)
			i++;
		len = ft_size_word(s, c, i);
		array[y] = ft_substr(s, i, len);
		if (!array[y])
			ft_free(array, y);
		i = i + len;
	}
	array[y] = 0;
	return (array);
}

char	**ft_free_split(char **strs)
{
	int i;

	i = 0;
	while (strs[i] != (void *)0)
		free(strs[i]);
	free(strs);
	return (NULL);
}

void	clean_ptrs(char **double_ptr)
{
	char	**tmp;

	tmp = double_ptr;
	while (*tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(double_ptr);
}

long long ft_atoi(const char *str)
{
	unsigned int	str_c;
	long long   	result;
	int				positive;

	str_c = 0;
	positive = 1;
	result = 0;
	while (str[str_c] == 32 || (str[str_c] >= 9
	                            && str[str_c] <= 13))
		str_c++;
	if (str[str_c] == 45)
	{
		positive = -1;
		str_c++;
	}
	else if (str[str_c] == 43)
		str_c++;
	while (str[str_c] != '\0')
	{
		if (str[str_c] < 48 || str[str_c] > 57)
		{
			ft_putstr_fd("Not a number!", 1);
			exit(1);
		}
		while (str[str_c] >= 48 && str[str_c] <= 57)
		{
			result = result * 10 + str[str_c] - '0';
			str++;
		}
	}
	if (result * positive > INT_MAX || result * positive < INT_MIN)
	{
		ft_putstr_fd("Value outside of INT range! Try again", 1);
		exit(1);
	}
	return (result * positive);
}
