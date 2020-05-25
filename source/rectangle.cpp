#define _USE_MATH_DEFINES
#include <math.h>
#include "rectangle.hpp"


Rect::Rect(Vec2 min, Vec2 max, Color color)
{
	// TODO: check needed to ensure min < max 
	this->min_ = min;
	this->max_ = max;
	this->color_ = color;
}

float Rect::circumference() const {
	Vec2 widthHeight = this->max_ - this->min_;
	float u = (widthHeight.x + widthHeight.y) * 2;
	return fabs(u);
}

void Rect::draw(Window& w) const {
	this->draw(w, 1.0f);
}

void Rect::draw(Window& w, float thickness) const
{
	w.draw_line(min_.x, min_.y, max_.x, min_.y, this->color_.r, this->color_.g, this->color_.b, thickness);
	w.draw_line(min_.x, min_.y, min_.x, max_.y, this->color_.r, this->color_.g, this->color_.b, thickness);
	w.draw_line(min_.x, max_.y, max_.x, max_.y, this->color_.r, this->color_.g, this->color_.b, thickness);
	w.draw_line(max_.x, min_.y, max_.x, max_.y, this->color_.r, this->color_.g, this->color_.b, thickness);
}

bool Rect::is_inside(Vec2 v) const
{
	return (
		this->min_.x < v.x && 
		this->min_.y < v.y &&
		this->max_.x > v.x &&
		this->max_.y > v.y);
}
