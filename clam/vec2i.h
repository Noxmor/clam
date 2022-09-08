#ifndef VEC2I_H
#define VEC2I_H

#include <math.h>

typedef struct
{
	int x;
	int y;
} vec2i;

void vec2i_add(vec2i* a, vec2i* b, vec2i* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
}

void vec2i_sub(vec2i* a, vec2i* b, vec2i* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
}

void vec2i_mul(vec2i* a, vec2i* b, vec2i* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
}

void vec2i_div(vec2i* a, vec2i* b, vec2i* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
}

void vec2i_scalar(vec2i* v, int scalar)
{
	v->x = scalar;
	v->y = scalar;
}

int vec2i_len(vec2i* v)
{
	return sqrt(v->x * v->x + v->y * v->y);
}

void vec2i_norm(vec2i* v)
{
	int len = vec2i_len(v);
	v->x /= len;
	v->y /= len;
}

int vec2i_dot(vec2i* a, vec2i* b)
{
	return a->x * b->x + a->y + b->y;
}

#endif