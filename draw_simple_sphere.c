#include "miniRT.h"

void draw_simple_sphere(t_world* world, t_vec3 camera, t_vec3 center, double radius)
{
	for (int i = 0; i < world->win_height; i++)
	{
		for (int j = 0; j < world->win_height; j++)
		{
			double x = ((double)j - 400) / 200;
		       	double y = ((double)i - 400) / 200;
			t_vec3 coord = vec3_init(x, y, 0);
			t_vec3 ray = vec3_sub(coord, camera);
			double A = vec3_dot(ray, ray);
			double B = 2 * (vec3_dot(camera, ray) - vec3_dot(center, ray));
			double C = vec3_dot(vec3_sub(camera, center), vec3_sub(camera, center)) - radius * radius; 
			if (B * B - 4 * A * C >= 0)
			{
				mlx_pixel_put(world->mlx.mlx_ptr, world->mlx.win, j, i, 0XFFFFFF);
			}		
		}
	}
}
