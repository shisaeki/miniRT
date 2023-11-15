#ifndef __mini_RT__
# define __mini_RT__

#include <stdio.h>
#include <math.h>
#include "minilibx-linux/mlx.h"

typedef struct	s_vec3
{
	double	x;
	double	y;
	double	z;
}		t_vec3;

typedef struct	s_mlx
{
	void	*mlx_ptr;
	void	*win;
}		t_mlx;

typedef struct	s_world
{
	struct s_mlx	mlx;
	int		win_width;
	int		win_height;
}		t_world;

t_vec3	vec3_init(double x, double y, double z);
t_vec3	vec3_add(t_vec3 a, t_vec3 b);
t_vec3	vec3_sub(t_vec3 a, t_vec3 b);
t_vec3	vec3_mul(t_vec3 a, double b);
double	vec3_dot(t_vec3 a, t_vec3 b);
t_vec3	vec3_cross(t_vec3 a, t_vec3 b);
double	vec3_mag(t_vec3 a);
t_vec3 vec3_nomalize(t_vec3 a);

#endif
