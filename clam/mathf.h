#ifndef MATHF_H
#define MATHF_H

#define CLAM_PI 3.1415926535f

float minf(float a, float b)
{
	return a < b ? a : b;
}

float maxf(float a, float b)
{
	return a > b ? a : b;
}

float to_degrees(float radians)
{
	return radians * 180.0f / CLAM_PI;
}

float to_radians(float degrees)
{
	return degrees * CLAM_PI / 180.0f;
}

#endif