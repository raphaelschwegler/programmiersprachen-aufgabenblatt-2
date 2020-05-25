#include "vec2.hpp"
#include <cmath>

Vec2& Vec2::operator+=(Vec2 const& v) {
	this->x += v.x;
	this->y += v.y;
	return *this;
}

Vec2& Vec2::operator-=(Vec2 const& v) {
	this->x -= v.x;
	this->y -= v.y;
	return *this;
}
Vec2& Vec2::operator*=(float s) {
	this->x *= s;
	this->y *= s;
	return *this;
}
Vec2& Vec2::operator/=(float s) {
	this->x /= s;
	this->y /= s;
	return *this;
}

float Vec2::magnitude() const
{
	return sqrt(pow(this->x,2) + pow(this->y,2));
}

Vec2 operator+(Vec2 const& u, Vec2 const& v) {
	Vec2 w{ u.x, u.y };
	w += v;
	return w;
}
Vec2 operator-(Vec2 const& u, Vec2 const& v) {
	Vec2 w{ u.x, u.y };
	w -= v;
	return w;
}
Vec2 operator*(Vec2 const& v, float s) {
	Vec2 w{ v.x, v.y};
	w *= s;
	return w;
}
Vec2 operator/(Vec2 const& v, float s) {
	Vec2 w{ v.x, v.y };
	w /= s;
	return w;
}
Vec2 operator*(float s, Vec2 const& v) {
	return v * s;
}



