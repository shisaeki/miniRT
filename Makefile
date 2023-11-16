all:
	gcc -o miniRT main.c vector3.c draw_simple_sphere.c minilibx-linux/libmlx_Linux.a -lm -lXext -lX11
