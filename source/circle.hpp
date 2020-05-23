#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
class Circle {
	public: Vec2 center_;
	public: float radius;
	Circle(Vec2 center, float radius);
	float circumference() const;
};
#endif 