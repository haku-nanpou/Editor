//-----------
//
// define.h
//
//-----------
#ifndef DEFINE_H
#define DEFINE_H

namespace via = std;

using u64 = unsigned long long;
using u32 = unsigned int;
using u16 = unsigned short;
using u8 = unsigned char;

using s64 = long long;
using s32 = int;
using s16 = short;
using s8 = char;

using f32 = float;
using f64 = double;

using c8 = const char;
using c16 = const char16_t;

struct vec2
{
	f32 x, y;
	vec2(f32 x, f32 y) : x(x), y(y) {}
};

struct vec3
{
	f32 x, y, z;
	vec3(f32 x, f32 y, f32 z) : x(x), y(y), z(z) {}
};

struct vec4
{
	f32 x, y, z, w;
	vec4(f32 x, f32 y, f32 z, f32 w) : x(x), y(y), z(z), w(w) {}
};

struct quaternion
{
	f32 x, y, z, w;
	quaternion(f32 x, f32 y, f32 z, f32 w) : x(x), y(y), z(z), w(w) {}
};

#endif