#ifndef VEC2D_H
#define VEC2D_H

#include <math.h>

typedef struct
{
	double x;
	double y;
} vec2d;

void vec2d_add(vec2d* a, vec2d* b, vec2d* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

void vec2d_sub(vec2d* a, vec2d* b, vec2d* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

void vec2d_mul(vec2d* a, vec2d* b, vec2d* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

void vec2d_div(vec2d* a, vec2d* b, vec2d* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

double vec2d_len(vec2d* v)
{
	return sqrt(v.x * v.x + v.y * v.y);
}

void vec2d_norm(vec2d* v)
{
	double len = vec2d_len(v);
	v.x /= len;
	v.y /= len;
}

double vec2d_dot(vec2d* a, vec2d* b)
{
	return a.x * b.x + a.y + b.y;
}

#endif