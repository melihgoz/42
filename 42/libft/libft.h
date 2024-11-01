/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:33:20 by megoz             #+#    #+#             */
/*   Updated: 2024/10/08 18:11:13 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define	LIBFT_H

#include <stdlib.h>

int	ft_isalpha(int c); /* checks if value is an alphabetical */
int	ft_isdigit(int c); /* checks if value is a digit */
int	ft_isalnum(int c); /* checks if value is an alphanumerical */
int	ft_isascii(int c); /* checks if value is in between ascii boundries*/
int	ft_isprint(int c); /* checks if value is printable*/

size_t	ft_strlen(const char *s);

#endif