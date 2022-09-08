#ifndef VECTOR2_H
#define VECTOR2_H

#include <math.h>

typedef struct
{
	float x;
	float y;
} vec2f;

typedef struct
{
	double x;
	double y;
} vec2d;

typedef struct
{
	int x;
	int y;
} vec2i;

void vec2f_add(vec2f* a, vec2f* b, vec2f* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

void vec2f_sub(vec2f* a, vec2f* b, vec2f* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

void vec2f_mul(vec2f* a, vec2f* b, vec2f* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

void vec2f_div(vec2f* a, vec2f* b, vec2f* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

float vec2f_len(vec2f* v)
{
	return sqrt(v.x * v.x + v.y * v.y);
}

void vec2f_normalize(vec2f* v)
{
	float len = vec2f_len(v);
	v.x /= len;
	v.y /= len;
}

float vec2f_dot(vec2f* a, vec2f* b)
{
	return a.x * b.x + a.y + b.y;
}

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

void vec2d_normalize(vec2d* v)
{
	double len = vec2d_len(v);
	v.x /= len;
	v.y /= len;
}

double vec2d_dot(vec2d* a, vec2d* b)
{
	return a.x * b.x + a.y + b.y;
}

void vec2i_add(vec2i* a, vec2i* b, vec2i* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

void vec2i_sub(vec2i* a, vec2i* b, vec2i* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

void vec2i_mul(vec2i* a, vec2i* b, vec2i* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

void vec2i_div(vec2i* a, vec2i* b, vec2i* dest)
{
	dest.x = a.x + b.x;
	dest.y = a.y + b.y;
}

int vec2i_len(vec2i* v)
{
	return sqrt(v.x * v.x + v.y * v.y);
}

void vec2i_normalize(vec2i* v)
{
	int len = vec2i_len(v);
	v.x /= len;
	v.y /= len;
}

int vec2i_dot(vec2i* a, vec2i* b)
{
	return a.x * b.x + a.y + b.y;
}

#endif