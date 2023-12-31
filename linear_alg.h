/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_alg.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: GunDalf <GunDalf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:15:21 by mbennani          #+#    #+#             */
/*   Updated: 2023/08/03 22:14:44 by GunDalf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINEAR_ALG_H
# define LINEAR_ALG_H

# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct nml_mat_s {
	unsigned int	num_rows;
	unsigned int	num_cols;
	double			**data;
	int				is_square;
}				t_nml_mat;

t_nml_mat	*nml_mat_new(unsigned int num_rows, unsigned int num_cols);
void		nml_mat_free(t_nml_mat *matrix);
void		nml_mat_printf(t_nml_mat *matrix);
t_nml_mat	*nml_mat_cp(t_nml_mat *matrix);
int			nml_mat_add_r(t_nml_mat *m1, t_nml_mat *m2);
t_nml_mat	*nml_mat_add(t_nml_mat *m1, t_nml_mat *m2);
t_nml_mat	*nml_mat_dot(t_nml_mat *m1, t_nml_mat *m2);
int			dot_product(t_nml_mat vect_a, t_nml_mat vect_b);
void		cross_product(t_nml_mat vect_a,
				t_nml_mat vect_b, t_nml_mat cross_p);

#endif