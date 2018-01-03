#pragma once

struct Vec2
{
	bool operator == (const Vec2& rhs) const;
	Vec2 operator + (const Vec2& rhs) const;
	Vec2 operator - (const Vec2& rhs) const;
	Vec2 operator += (const Vec2& rhs);
	Vec2 operator -= (const Vec2& rhs);
	Vec2& Scale(const float s);
	Vec2 ScaleAndRet(const float s);
	float x, y;
};