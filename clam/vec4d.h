#ifndef VEC4D_H
#define VEC4D_H

typedef struct
{
	double x;
	double y;
	double z;
	double w;
} vec4d;

void vec4d_add(vec4d* a, vec4d* b, vec4d* dest)
{
	dest->x = a->x + b->x;
	dest->y = a->y + b->y;
	dest->z = a->z + b->z;
	dest->w = a->w + b->w;
}

void vec4d_sub(vec4d* a, vec4d* b, vec4d* dest)
{
	dest->x = a->x - b->x;
	dest->y = a->y - b->y;
	dest->z = a->z - b->z;
	dest->w = a->w - b->w;
}

void vec4d_mul(vec4d* a, vec4d* b, vec4d* dest)
{
	dest->x = a->x * b->x;
	dest->y = a->y * b->y;
	dest->y = a->y * b->y;
	dest->w = a->w * b->w;
}

void vec4d_div(vec4d* a, vec4d* b, vec4d* dest)
{
	dest->x = a->x / b->x;
	dest->y = a->y / b->y;
	dest->z = a->z / b->z;
	dest->w = a->w / b->w;
}

void vec4d_scalar(vec4d* v, double scalar)
{
	v->x = scalar;
	v->y = scalar;
	v->z = scalar;
	v->w = scalar;
}

double vec4d_len(vec4d* v)
{
	return sqrt(v->x * v->x + v->y * v->y + v->z * v->z + v->w * v->w);
}

void vec4d_norm(vec4d* v)
{
	double len = vec4d_len(v);
	v->x /= len;
	v->y /= len;
	v->z /= len;
	v->w /= len;
}

double vec4d_dot(vec4d* a, vec4d* b)
{
	return a->x * b->x + a->y + b->y + a->z * b->z + a->w * b->w;
}

#endif