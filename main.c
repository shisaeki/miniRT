#include "miniRT.h"

int main()
{
	t_vec3	a, b, c;
	a = vec3_init(1, 2, 3);
	b = vec3_init(4, 5, 6);
	c = vec3_cross(a, b);

	printf("%lf\n", c.x);
	return (0);
}
