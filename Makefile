all:
	gcc -o miniRT main.c vector3.c minilibx-linux/libmlx_Linux.a -lm -lXext -lX11
