#ifndef VEC4I_H
#define VEC4I_H

typedef struct
{
	int x;
	int y;
	int z;
	int w;
} vec4i;

void vec4i_add(vec4i* a, vec4i* b, vec4i* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
	dest->z = a->z + b->z;
	dest->w = a->w + b->w;
}

void vec4i_sub(vec4i* a, vec4i* b, vec4i* dest)
{
	dest->x = a->x - b->x;
	dest->y = a->y - b->y;
	dest->z = a->z - b->z;
	dest->w = a->w - b->w;
}

void vec4i_mul(vec4i* a, vec4i* b, vec4i* dest)
{
	dest->x = a->x * b->x;
	dest->y = a->y * b->y;
	dest->y = a->y * b->y;
	dest->w = a->w * b->w;
}

void vec4i_div(vec4i* a, vec4i* b, vec4i* dest)
{
	dest->x = a->x / b->x;
	dest->y = a->y / b->y;
	dest->z = a->z / b->z;
	dest->w = a->w / b->w;
}

void vec4i_scalar(vec4i* v, int scalar)
{
	v->x = scalar;
	v->y = scalar;
	v->z = scalar;
	v->w = scalar;
}

int vec4i_len(vec4i* v)
{
	return sqrt(v->x * v->x + v->y * v->y + v->z * v->z + v->w * v->w);
}

void vec4i_norm(vec4i* v)
{
	int len = vec4i_len(v);
	v->x /= len;
	v->y /= len;
	v->z /= len;
	v->w /= len;
}

int vec4i_dot(vec4i* a, vec4i* b)
{
	return a->x * b->x + a->y + b->y + a->z * b->z + a->w * b->w;
}

#endif