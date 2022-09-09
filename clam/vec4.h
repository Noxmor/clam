#ifndef VEC4_H
#define VEC4_H

typedef struct
{
	float x;
	float y;
	float z;
	float w;
} vec4;

typedef vec4 vec4f;

void vec4_add(vec4* a, vec4* b, vec4* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
	dest->z = a->z + b->z;
	dest->w = a->w + b->w;
}

void vec4_sub(vec4* a, vec4* b, vec4* dest)
{
	dest->x = a->x - b->x;
	dest->y = a->y - b->y;
	dest->z = a->z - b->z;
	dest->w = a->w - b->w;
}

void vec4_mul(vec4* a, vec4* b, vec4* dest)
{
	dest->x = a->x * b->x;
	dest->y = a->y * b->y;
	dest->y = a->y * b->y;
	dest->w = a->w * b->w;
}

void vec4_div(vec4* a, vec4* b, vec4* dest)
{
	dest->x = a->x / b->x;
	dest->y = a->y / b->y;
	dest->z = a->z / b->z;
	dest->w = a->w / b->w;
}

void vec4_scalar(vec4* v, float scalar)
{
	v->x = scalar;
	v->y = scalar;
	v->z = scalar;
	v->w = scalar;
}

float vec4_len(vec4* v)
{
	return sqrt(v->x * v->x + v->y * v->y + v->z * v->z + v->w * v->w);
}

void vec4_norm(vec4* v)
{
	float len = vec4_len(v);
	v->x /= len;
	v->y /= len;
	v->z /= len;
	v->w /= len;
}

float vec4_dot(vec4* a, vec4* b)
{
	return a->x * b->x + a->y + b->y + a->z * b->z + a->w * b->w;
}

#endif