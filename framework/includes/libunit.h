/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:14:47 by pscott            #+#    #+#             */
/*   Updated: 2018/12/02 18:45:48 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "libfw.h"

# define TIMEOUT 6

typedef struct			s_unit_test
{
	int					(*f)(void);
	char				*name;
	int					expected;
	struct s_unit_test	*next;
}						t_unit_test;

typedef struct			s_err_info
{
	int					err;
	int					total;
}						t_err_info;

int						load_test(int (*f)(void), t_unit_test **testlist, \
		char *name, int expected);
int						launch_test(t_unit_test **testlist, t_err_info *info);
void					print_header(void);
int						process_launch(int (*f)(void));
int						exitstatus(int stat);
void					print_result(int stat, int expected);
int						print_usage(void);
void					print_score(int a, int b);
void					init_info(t_err_info *info);
int						void_char_test(int len, void (*f)(char), char input);
int						void_str_test(int len, void (*f)(char*), char *input);
int						void_itoa_test(int len, void (*f)(int), int input, \
		char *output);
void					print_test(char *name);
#endif
