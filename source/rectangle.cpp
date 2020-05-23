#include "rectangle.hpp"

Rect::Rect(Vec2 min, Vec2 max)
{
	this->min_ = min;
	this->max_ = max;
}

float Rect::circumference() const {
	return 0.0f;
}
