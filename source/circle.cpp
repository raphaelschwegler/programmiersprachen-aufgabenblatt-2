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
/*
void Circle::draw(Window& w)
{
	int m = 16;
	Vec2* prev = NULL;
	Vec2 f { this->radius,0 };
	Vec2* first = &f;
	Vec2* curr = &f;
	for (int i = 0; i < m; i++) {
		// curr = &((make_rotation_mat2(2 * M_PI * i / m) * f) + this->center_);
		Vec2* a = NULL;
		a = &((make_rotation_mat2(2 * M_PI * i / m) * f) + this->center_);
		curr = a;
		if (prev != NULL) {
			w.draw_line(prev->x, prev->y, curr->x, curr->y, this->color_.r, this->color_.g, this->color_.b);
		}
		prev = curr;

	}
	//w.draw_line(first->x, first->y, curr->x, curr->y, this->color_.r, this->color_.g, this->color_.b);

}
*/

void Circle::draw(Window& w) {
	this->draw(w, 1.0f);
}

void Circle::draw(Window& w, float thickness) 
{
	int m = 360;
	Vec2 f{ this->radius,0 };
	Vec2 curr, prev = f + this->center_;
	for (int i = 1; i < m; i++) {
		curr = (make_rotation_mat2(2 * M_PI * i / m) * f) + this->center_;
		w.draw_line(prev.x, prev.y, curr.x, curr.y, this->color_.r, this->color_.g, this->color_.b,thickness);
		prev = curr;

	}
	prev = f + this->center_;
	w.draw_line(prev.x, prev.y, curr.x, curr.y, this->color_.r, this->color_.g, this->color_.b);

}

bool Circle::is_inside(Vec2 v) const
{
	return (v - this->center_).magnitude() < this->radius;
}
