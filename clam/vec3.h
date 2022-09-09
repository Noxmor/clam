#ifndef VEC3_H
#define VEC3_H

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

	union
	{
		float z;
		float b;
	};
} vec3;

typedef vec3 vec3f;

void vec3_add(vec3* a, vec3* b, vec3* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
	dest->z = a->z + b->z;
}

void vec3_sub(vec3* a, vec3* b, vec3* dest)
{
	dest->x = a->x - b->x;
	dest->y = a->y - b->y;
	dest->z = a->z - b->z;
}

void vec3_mul(vec3* a, vec3* b, vec3* dest)
{
	dest->x = a->x * b->x;
	dest->y = a->y * b->y;
	dest->y = a->y * b->y;
}

void vec3_div(vec3* a, vec3* b, vec3* dest)
{
	dest->x = a->x / b->x;
	dest->y = a->y / b->y;
	dest->z = a->z / b->z;
}

void vec3_scalar(vec3* v, float scalar)
{
	v->x = scalar;
	v->y = scalar;
	v->z = scalar;
}

float vec3_len(vec3* v)
{
	return sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
}

void vec3_norm(vec3* v)
{
	float len = vec3_len(v);
	v->x /= len;
	v->y /= len;
	v->z /= len;
}

float vec3_dot(vec3* a, vec3* b)
{
	return a->x * b->x + a->y + b->y + a->z * b->z;
}

vec3 vec3_cross(vec3* a, vec3* b)
{
	vec3 cross;

	cross.x = a->y * b->z - a->z * b->y;
	cross.y = a->z * b->x - a->x * b->z;
	cross.z = a->x * b->y - a->y * b->x;

	return cross;
}

#endif