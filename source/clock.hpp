#include "circle.hpp"

class Clock : Circle{
	float start;
	float now;
	public :
	Clock(Vec2 v, float radius, float time);
	void draw(Window& w, float thickness);
};