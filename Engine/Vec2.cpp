#include "Vec2.h"

bool Vec2::operator==(const Vec2 & rhs) const
{
	return x == rhs.x && y == rhs.y;
}

Vec2 Vec2::operator+(const Vec2 & rhs) const
{
	return { x + rhs.x, y + rhs.y };
}

Vec2 Vec2::operator-(const Vec2 & rhs) const
{
	return { x - rhs.x, y - rhs.y };
}

Vec2 Vec2::operator+=(const Vec2 & rhs)
{
	x += rhs.x;
	y += rhs.y;
	return *this;
}

Vec2 Vec2::operator-=(const Vec2 & rhs)
{
	x -= rhs.x;
	y -= rhs.y;
	return *this;
}

Vec2& Vec2::Scale(const float s)
{
	x *= s;
	y *= s;
	return *this;
}

Vec2 Vec2::ScaleAndRet(const float s)
{
	return { x * s, y * s };
}
