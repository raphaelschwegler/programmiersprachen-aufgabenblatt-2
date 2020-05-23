#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"
#include "color.hpp"

class Rect {
	public: Vec2 min_;
	public: Vec2 max_;
	public: Color color_;
	Rect(Vec2 min, Vec2 max, Color color);
	float circumference() const;
};
#endif 