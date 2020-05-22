#include <math.h>
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
	return 0.0f;
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
	return v;
}
Mat2 inverse(Mat2 const& m) {
	return m;
}
Mat2 transpose(Mat2 const& m) {
	return m;
}
Mat2 make_rotation_mat2(float phi) {
	return;
}