#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"
class Rect {
	public: Vec2 min_;
	public: Vec2 max_;
	Rect(Vec2 min, Vec2 max);
};
#endif 