#include "circle.hpp"

Circle::Circle(Vec2 center, float radius) {
	this->center_ = center;
	this->radius = radius;
}
float Circle::circumference() const {
	return 0.0f;
}