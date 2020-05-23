#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include "color.hpp"
class Circle {
	public: Vec2 center_;
	public: float radius;
	public: Color color_;
	Circle(Vec2 center, float radius, Color color);
	float circumference() const;
};
#endif 