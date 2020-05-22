#include <cmath>
#include "mat.hpp"

Mat2& Mat2::operator*=(Mat2 const& m) {
	Mat2 r = *this * m;
	this->e_00 = r.e_00;
	this->e_10 = r.e_10;
	this->e_01 = r.e_01;
	this->e_11 = r.e_11;
	return *this;
}

float Mat2::det() const{
	return (this->e_00 * this->e_11 - this->e_01 * this->e_10);
}

Mat2 operator*(Mat2 const& m1, Mat2 const& m2) {
	Mat2 r{
		m1.e_00 * m2.e_00 + m1.e_01 * m2.e_10,
		m1.e_10 * m2.e_00 + m1.e_11 * m2.e_10,
		m1.e_00 * m2.e_01 + m1.e_01 * m2.e_11,
		m1.e_10 * m2.e_01 + m1.e_11 * m2.e_11,
	};
	return r;
}

Vec2 operator*(Mat2 const& m, Vec2 const& v) {
	Vec2 a;
	a.x = v.x * m.e_00 + v.y * m.e_01;
	a.y = v.x * m.e_10 + v.y * m.e_11;
	return a;
}
Mat2 inverse(Mat2 const& m) {
	Mat2 a;
	a.e_00 = m.e_11 / m.det();
	a.e_10 = -m.e_01 / m.det();
	a.e_01 = -m.e_10 / m.det();
	a.e_11 = m.e_00 / m.det();
	return a;
}
Mat2 transpose(Mat2 const& m) {
	Mat2 a{m};
	a.e_01 = m.e_10;
	a.e_10 = m.e_01;
	return a;
}
Mat2 make_rotation_mat2(float phi) {
	Mat2 a{cos(phi), sin(phi), -sin(phi), cos(phi)};
	return a;
}