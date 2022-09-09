#ifndef vec3I_H
#define vec3I_H

#include <math.h>

typedef struct
{
	int x;
	int y;
	int z;
} vec3i;

void vec3i_add(vec3i* a, vec3i* b, vec3i* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
	dest->z = a->z + b->z;
}

void vec3i_sub(vec3i* a, vec3i* b, vec3i* dest)
{
	dest->x = a->x - b->x;
	dest->y = a->y - b->y;
	dest->z = a->z - b->z;
}

void vec3i_mul(vec3i* a, vec3i* b, vec3i* dest)
{
	dest->x = a->x * b->x;
	dest->y = a->y * b->y;
	dest->y = a->y * b->y;
}

void vec3i_div(vec3i* a, vec3i* b, vec3i* dest)
{
	dest->x = a->x / b->x;
	dest->y = a->y / b->y;
	dest->z = a->z / b->z;
}

void vec3i_scalar(vec3i* v, int scalar)
{
	v->x = scalar;
	v->y = scalar;
	v->z = scalar;
}

int vec3i_len(vec3i* v)
{
	return sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
}

void vec3i_norm(vec3i* v)
{
	int len = vec3i_len(v);
	v->x /= len;
	v->y /= len;
	v->z /= len;
}

int vec3i_dot(vec3i* a, vec3i* b)
{
	return a->x * b->x + a->y + b->y + a->z * b->z;
}

vec3i vec3i_cross(vec3i* a, vec3i* b)
{
	vec3i cross;

	cross.x = a->y * b->z - a->z * b->y;
	cross.y = a->z * b->x - a->x * b->z;
	cross.z = a->x * b->y - a->y * b->x;

	return cross;
}

#endif