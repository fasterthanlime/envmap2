#ifndef __ZMATH_H__
#define __ZMATH_H__

#include "std.h"

class ZMath
{
public:
	// Trigonometric functions
	static float cos(float rad);
	static float sin(float rad);
	static float tan(float rad);
	static float acos(float rad);
	static float asin(float rad);
	static float atan(float rad);
	static float rad2deg(float rad);
	static float deg2rad(float deg);

	// Misc functions
	static float exp(float t);
	static float abs(float t);
	static float sqrt(float t);
	static int floor(float t);
	static int ceil(float t);
	static int clamp(int val, int min, int max);
	static float clamp(float val, float min, float max);

	// Constants
	static const float PI;
	static const float PI_DIV_2;
	static const float PI_DIV_4;
};


inline float ZMath::cos(float rad)
{
	return cosf(rad);
}

inline float ZMath::sin(float rad)
{
	return sinf(rad);
}

inline float ZMath::tan(float rad)
{
	return tanf(rad);
}

inline float ZMath::acos(float rad)
{
	return acosf(rad);
}

inline float ZMath::asin(float rad)
{
	return asinf(rad);
}

inline float ZMath::atan(float rad)
{
	return atanf(rad);
}

inline float ZMath::rad2deg(float rad)
{
	return rad * 180.0f / PI;
}

inline float ZMath::deg2rad(float deg)
{
	return deg * PI / 180.0f;
}

inline float ZMath::exp(float t)
{
	return ::exp(t);
}

inline float ZMath::abs(float t)
{
	return fabsf(t);
}

inline float ZMath::sqrt(float t)
{
	return sqrtf(t);
}

inline int ZMath::floor(float t)
{
	return (int)::floorf(t);
}

inline int ZMath::ceil(float t)
{
	return (int)::ceilf(t);
}

inline int ZMath::clamp(int val, int min, int max)
{
	assert(min <= max);

	if (val > max)
		val = max;

	if (val < min)
		val = min;

	return val;
}

inline float ZMath::clamp(float val, float min, float max)
{
	assert(min <= max);

	if (val > max)
		val = max;

	if (val < min)
		val = min;

	return val;
}

#endif // __ZMATH_H__
