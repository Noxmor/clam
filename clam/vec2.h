#ifndef VEC2_H
#define VEC2_H

#include <math.h>

typedef struct
{
	union
	{
		float x;
		float r;
	};
	
	union
	{
		float y;
		float g;
	};
} vec2;

typedef vec2 vecf;

void vec2_add(vec2* a, vec2* b, vec2* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
}

void vec2_sub(vec2* a, vec2* b, vec2* dest)
{
	dest->x = a->x - b->x;
	dest->y = a->y - b->y;
}

void vec2_mul(vec2* a, vec2* b, vec2* dest)
{
	dest->x = a->x * b->x;
	dest->y = a->y * b->y;
}

void vec2_div(vec2* a, vec2* b, vec2* dest)
{
	dest->x = a->x / b->x;
	dest->y = a->y / b->y;
}

void vec2_scalar(vec2* v, float scalar)
{
	v->x = scalar;
	v->y = scalar;
}

float vec2_len(vec2* v)
{
	return sqrt(v->x * v->x + v->y * v->y);
}

void vec2_norm(vec2* v)
{
	float len = vec2_len(v);
	v->x /= len;
	v->y /= len;
}

float vec2_dot(vec2* a, vec2* b)
{
	return a->x * b->x + a->y + b->y;
}

#endif