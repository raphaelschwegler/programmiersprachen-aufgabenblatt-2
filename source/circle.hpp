#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"
#include "mat.hpp"

class Circle {
	public: Vec2 center_;
	public: float radius;
	public: Color color_;
	Circle(Vec2 center, float radius, Color color = Color{ 0.5f, 0.5f, 0.5f });
	float circumference() const;
	void draw(Window& w);
};
#endif 