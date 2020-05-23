#define _USE_MATH_DEFINES
#include <math.h>
#include "circle.hpp"

Circle::Circle(Vec2 center, float radius, Color color) {
	this->center_ = center;
	this->radius = radius;
	this->color_ = color;
}
float Circle::circumference() const {
	return fabs(this->radius * 2 * M_PI);
}