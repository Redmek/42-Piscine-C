/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 01:56:32 by remekram          #+#    #+#             */
/*   Updated: 2019/08/19 11:20:21 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE 0
# define EVEN(x) x % 2 == 0
# define SUCCESS 0
# include <unistd.h>

typedef int		t_bool;

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
