#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Rect {
	public: Vec2 min_;
	public: Vec2 max_;
	public: Color color_;
	Rect(Vec2 min, Vec2 max, Color color = Color{ 0.5f, 0.5f, 0.5f });
	float circumference() const;
	void draw(Window& w) ;
	void draw(Window& w, float thickness);
	bool is_inside(Vec2 v) const;
};
#endif 