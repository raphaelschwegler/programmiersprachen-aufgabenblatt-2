#define _USE_MATH_DEFINES
#include <math.h>
#include "clock.hpp"
#include "window.hpp"

Clock::Clock(Vec2 v, float radius, float time) : Circle (v,radius)
{
	this->start = time;
	this->now = time;
}

void Clock::draw(Window& w, float thickness)
{
	Circle::draw(w, thickness);
	this->now = w.get_time();
	float t = this->now - this->start;
	Vec2 sec = { 
		this->radius * cos(t * 2 * M_PI / 60 -M_PI/2) + this->center_.x, 
		this->radius * sin(t * 2 * M_PI / 60 - M_PI / 2) + this->center_.y };
	w.draw_line(this->center_.x, this->center_.y, sec.x, sec.y, 1, 0, 0, 0.5f);
	t /= 60;
	Vec2 min = {
		this->radius * 0.8 * cos(t * 2 * M_PI / 60 - M_PI / 2) + this->center_.x,
		this->radius * 0.8 * sin(t * 2 * M_PI / 60 - M_PI / 2) + this->center_.y };
	w.draw_line(this->center_.x, this->center_.y, min.x, min.y, 1, 1, 1, 1);
	t /= 60;
	Vec2 h = {
		this->radius/2 * cos(t * 2 * M_PI / 60 - M_PI / 2) + this->center_.x,
		this->radius/2 * sin(t * 2 * M_PI / 60 - M_PI / 2) + this->center_.y };
	w.draw_line(this->center_.x, this->center_.y, h.x, h.y, 0, 0, 0, 2);

}
