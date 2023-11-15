#include "miniRT.h"

t_vec3	vec3_init(double x, double y, double z)
{
	t_vec3	new_vec3;

	new_vec3.x = x;
	new_vec3.y = y;
	new_vec3.z = z;

	return (new_vec3);
}

t_vec3	vec3_add(t_vec3 a, t_vec3 b)
{
	t_vec3	new_vec3;

	new_vec3.x = a.x + b.x;
	new_vec3.y = a.y + b.y;
	new_vec3.z = a.z + b.z;

	return (new_vec3);
}

t_vec3	vec3_sub(t_vec3 a, t_vec3 b)
{
	t_vec3	new_vec3;

	new_vec3.x = a.x - b.x;
	new_vec3.y = a.y - b.y;
	new_vec3.z = a.z - b.z;

	return (new_vec3);
}

t_vec3	vec3_mul(t_vec3 a, double b)
{
	t_vec3	new_vec3;

	new_vec3.x = a.x * b;
	new_vec3.y = a.y * b;
	new_vec3.z = a.z * b;

	return (new_vec3);
}

double	vec3_dot(t_vec3 a, t_vec3 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

t_vec3	vec3_cross(t_vec3 a, t_vec3 b)
{
	t_vec3	new_vec3;

	new_vec3.x = a.y * b.z - a.z * b.y;
	new_vec3.y = a.z * b.x - a.x * b.z;
	new_vec3.z = a.x * b.y - a.y * b.x;

	return (new_vec3);
}

double	vec3_mag(t_vec3 a)
{
	return (sqrt(a.x * a.x + a.y * a.y + a.z * a.z));
}

t_vec3	vec3_normalize(t_vec3 a)
{
	return (vec3_mul(a, 1 / vec3_mag(a)));
}

