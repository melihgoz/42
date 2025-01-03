/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 15:07:03 by megoz             #+#    #+#             */
/*   Updated: 2025/01/03 18:17:58 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *reading(char *str, int fd)
{
	char	*temp;
	int		read_value;
	
	temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	read_value = 1;
	while(!ft_if_new_line(temp) && read_value > 0)
	{
		read_value = read(fd, temp, BUFFER_SIZE);
		str = ft_strjoin(str, temp);
	}
	return (str);
}

char	*seperate_newline(char *str)
{
	int		index;
	char	*line;

	line = malloc(sizeof(char) * (ft_if_new_line(str) + 1));
	index = 0;
	while (str[index] && str[index] != '\n')
	{
		line[index] = str[index];
		index++;
	}
	if (str[index] == '\n')
	{
		line[index] = '\n';
		index++;
	}
	line[index] = '\0';
	return (line);
}

char	*after_new_line(char *str)
{
	int	index;
	
	index = 0;
	while (str[index] != '\0' && str[index] != '\n')
		index++;
	if (str[index] == '\n')
		index++;
	return (str+index);
}

char	*get_next_line(int fd)
{
	static char *str = NULL;
	str = reading(str, fd);
	char	*result = seperate_newline(str);
	str = after_new_line(str);
	return (result);
}

int main()
{
	int fd = open("a.txt", O_RDONLY);
	printf("%s", get_next_line(fd));

}