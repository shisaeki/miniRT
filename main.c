#include "miniRT.h"

int main()
{
	t_world	world;
	t_vec3	camera;
	t_vec3	center;
	double radius;

	world.mlx.mlx_ptr = mlx_init();
	world.win_width = 800;
	world.win_height = 800;
	world.mlx.win = mlx_new_window(world.mlx.mlx_ptr, world.win_width, world.win_height, "miniRT");

	camera = vec3_init(0, 0, 3);
	center = vec3_init(0, 0, 0);
	radius = 1;
	draw_simple_sphere(&world, camera, center, radius);

	mlx_loop(world.mlx.mlx_ptr);
	return (0);
}
