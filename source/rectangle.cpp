#define _USE_MATH_DEFINES
#include <math.h>
#include "rectangle.hpp"

Rect::Rect(Vec2 min, Vec2 max)
{
	// TODO: check needed to ensure min < max 
	this->min_ = min;
	this->max_ = max;
}

float Rect::circumference() const {
	Vec2 widthHeight = this->max_ - this->min_;
	float u = (widthHeight.x + widthHeight.y) * 2;
	return fabs(u);
}
