#ifndef VEC3D_H
#define VEC3D_H

#include <math.h>

typedef struct
{
	double x;
	double y;
	double z;
} vec3d;

void vec3d_add(vec3d* a, vec3d* b, vec3d* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
	dest->z = a->z + b->z;
}

void vec3d_sub(vec3d* a, vec3d* b, vec3d* dest)
{
	dest->x = a->x - b->x;
	dest->y = a->y - b->y;
	dest->z = a->z - b->z;
}

void vec3d_mul(vec3d* a, vec3d* b, vec3d* dest)
{
	dest->x = a->x * b->x;
	dest->y = a->y * b->y;
	dest->y = a->y * b->y;
}

void vec3d_div(vec3d* a, vec3d* b, vec3d* dest)
{
	dest->x = a->x / b->x;
	dest->y = a->y / b->y;
	dest->z = a->z / b->z;
}

void vec3d_scalar(vec3d* v, double scalar)
{
	v->x = scalar;
	v->y = scalar;
	v->z = scalar;
}

double vec3d_len(vec3d* v)
{
	return sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
}

void vec3d_norm(vec3d* v)
{
	double len = vec3d_len(v);
	v->x /= len;
	v->y /= len;
	v->z /= len;
}

double vec3d_dot(vec3d* a, vec3d* b)
{
	return a->x * b->x + a->y + b->y + a->z * b->z;
}

vec3d vec3d_cross(vec3d* a, vec3d* b)
{
	vec3d cross;

	cross.x = a->y * b->z - a->z * b->y;
	cross.y = a->z * b->x - a->x * b->z;
	cross.z = a->x * b->y - a->y * b->x;

	return cross;
}

#endif