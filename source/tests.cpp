#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <catch.hpp>
#include "vec2.hpp"
#include "mat.hpp"
#include "color.hpp"

TEST_CASE("describeVec2Test", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };

	REQUIRE(0.0f == a.x);
	REQUIRE(0.0f == a.y);
	REQUIRE(5.1f == Approx(b.x));
	REQUIRE(-9.3f == Approx(b.y));
}

TEST_CASE("describe_additionVec2", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };
	Vec2 c;
	Vec2 d{ 3.2f, 2.1f };
	a += c;
	REQUIRE(a.x == Approx(0.0f));
	REQUIRE(a.y == Approx(0.0f));

	a += b;
	REQUIRE(a.x == Approx(5.1f));
	REQUIRE(a.y == Approx(-9.3f));

	b += d;
	REQUIRE(b.x == Approx(8.3f));
	REQUIRE(b.y == Approx(-7.2f));

	d += c;
	REQUIRE(d.x == Approx(3.2f));
	REQUIRE(d.y == Approx(2.1f));
}

TEST_CASE("describe_subtractionVec2", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };
	Vec2 c;
	Vec2 d{ 3.2f, 2.1f };
	a -= c;
	REQUIRE(a.x == Approx(0.0f));
	REQUIRE(a.y == Approx(0.0f));

	a -= b;
	REQUIRE(a.x == Approx(-5.1f));
	REQUIRE(a.y == Approx(9.3f));

	b -= d;
	REQUIRE(b.x == Approx(1.9f));
	REQUIRE(b.y == Approx(-11.4f));

	d -= c;
	REQUIRE(d.x == Approx(3.2f));
	REQUIRE(d.y == Approx(2.1f));


}

TEST_CASE("describe_scalarMultVec2", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };

	a *= 0;
	REQUIRE(a.x == Approx(0.0f));
	REQUIRE(a.y == Approx(0.0f));

	a *= 10;
	REQUIRE(a.x == Approx(0.0f));
	REQUIRE(a.y == Approx(0.0f));

	b *= 0;
	REQUIRE(b.x == Approx(0.0f));
	REQUIRE(b.y == Approx(0.0f));

	Vec2 c{ 5.1f, -9.3f };
	c *= 10.0f;
	REQUIRE(c.x == Approx(51.0f));
	REQUIRE(c.y == Approx(-93.0f));

	Vec2 d{ 5.1f, -9.3f };
	d *= -1;
	REQUIRE(d.x == Approx(-5.1f));
	REQUIRE(d.y == Approx(9.3f));
}

TEST_CASE("describe_scalarDivisVec2", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };
	Vec2 c{ 5.1f, -9.3f };

	a /= 10;
	REQUIRE(a.x == Approx(0.0f));
	REQUIRE(a.y == Approx(0.0f));

	b /= 10;
	REQUIRE(b.x == Approx(0.51f));
	REQUIRE(b.y == Approx(-0.93f));


	c /= -1;
	REQUIRE(c.x == Approx(-5.1f));
	REQUIRE(c.y == Approx(9.3f));


}

TEST_CASE("describe_direktAdditionVec2", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };
	Vec2 c{ 6.61f, 0.1f };
	Vec2 d;

	REQUIRE((a + d).x == Approx(0.0f));
	REQUIRE((a + d).y == Approx(0.0f));

	REQUIRE((a + b).x == Approx(5.1f));
	REQUIRE((a + b).y == Approx(-9.3f));

	REQUIRE((b + c).x == Approx(11.71f));
	REQUIRE((b + c).y == Approx(-9.2f));
}

TEST_CASE("describe_direktSubtractionVec2", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };
	Vec2 c{ 6.61f, 0.1f };
	Vec2 d;

	REQUIRE((a - d).x == Approx(0.0f));
	REQUIRE((a - d).y == Approx(0.0f));

	REQUIRE((a - b).x == Approx(-5.1f));
	REQUIRE((a - b).y == Approx(9.3f));

	REQUIRE((b - c).x == Approx(-1.51f));
	REQUIRE((b - c).y == Approx(-9.4f));
}

TEST_CASE("describe_direktMultiplicationVec2", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };
	Vec2 c{ 6.61f, 0.1f };

	REQUIRE((a * 0).x == Approx(0.0f));
	REQUIRE((a * 0).y == Approx(0.0f));

	REQUIRE((b * 0).x == Approx(0.0f));
	REQUIRE((b * 0).y == Approx(0.0f));

	REQUIRE((b * 1).x == Approx(5.1f));
	REQUIRE((b * 1).y == Approx(-9.3f));

	REQUIRE((b * 1).x == Approx(5.1f));
	REQUIRE((b * 1).y == Approx(-9.3f));


	REQUIRE((b * -1).x == Approx(-5.1f));
	REQUIRE((b * -1).y == Approx(9.3f));


	REQUIRE((b * 10).x == Approx(51.0f));
	REQUIRE((b * 10).y == Approx(-93.0f));

	REQUIRE((10 * c).x == Approx(66.1f));
	REQUIRE((10 * c).y == Approx(1.0f));

	REQUIRE((2.1f * c).x == Approx(13.881f));
	REQUIRE((2.1f * c).y == Approx(0.21f));

}

TEST_CASE("describe_direktDivisionVec2", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };

	REQUIRE((a / 10.1).x == Approx(0.0f));
	REQUIRE((a / 10.1).y == Approx(0.0f));

	REQUIRE((b / 10).x == Approx(0.51f));
	REQUIRE((b / 10).y == Approx(-0.93f));

	REQUIRE((b / -10).x == Approx(-0.51f));
	REQUIRE((b / -10).y == Approx(0.93f));
}

TEST_CASE("describe_multiplyMat2", "[mat]")
{
	Mat2 a;
	Mat2 b{ 5.0f, 3.0f, 8.0f, 2.0f };
	Mat2 c{ 3.0f, 7.0f, 8.0f, 6.0f };
	Mat2 d{ 0.0f, 0.0f, 0.0f, 0.0f };
	Mat2 e{ -1.0f, 0.0f, 0.0f, -1.0f };

	c *= b;
	REQUIRE(c.e_00 == Approx(39.0f));
	REQUIRE(c.e_10 == Approx(53.0f));
	REQUIRE(c.e_01 == Approx(40.0f));
	REQUIRE(c.e_11 == Approx(68.0f));

	b *= a;
	REQUIRE(b.e_00 == Approx(5.0f));
	REQUIRE(b.e_10 == Approx(3.0f));
	REQUIRE(b.e_01 == Approx(8.0f));
	REQUIRE(b.e_11 == Approx(2.0f));

	d *= b;
	REQUIRE(d.e_00 == Approx(0.0f));
	REQUIRE(d.e_10 == Approx(0.0f));
	REQUIRE(d.e_01 == Approx(0.0f));
	REQUIRE(d.e_11 == Approx(0.0f));

	e *= b;
	REQUIRE(e.e_00 == Approx(-5.0f));
	REQUIRE(e.e_10 == Approx(-3.0f));
	REQUIRE(e.e_01 == Approx(-8.0f));
	REQUIRE(e.e_11 == Approx(-2.0f));
}

TEST_CASE("describe_direktMultiplyMat2", "[mat]")
{
	Mat2 a;
	Mat2 b{ 5.0f, 3.0f, 8.0f, 2.0f };
	Mat2 c{ 3.0f, 7.0f, 8.0f, 6.0f };
	Mat2 d{ 0.0f, 0.0f, 0.0f, 0.0f };
	Mat2 e{ -1.0f, 0.0f, 0.0f, -1.0f };

	
	REQUIRE((c * b).e_00 == Approx(39.0f));
	REQUIRE((c * b).e_10 == Approx(53.0f));
	REQUIRE((c * b).e_01 == Approx(40.0f));
	REQUIRE((c * b).e_11 == Approx(68.0f));

	
	REQUIRE((b * a).e_00 == Approx(5.0f));
	REQUIRE((b * a).e_10 == Approx(3.0f));
	REQUIRE((b * a).e_01 == Approx(8.0f));
	REQUIRE((b * a).e_11 == Approx(2.0f));

	
	REQUIRE((d * b).e_00 == Approx(0.0f));
	REQUIRE((d * b).e_10 == Approx(0.0f));
	REQUIRE((d * b).e_01 == Approx(0.0f));
	REQUIRE((d * b).e_11 == Approx(0.0f));

	
	REQUIRE((e * b).e_00 == Approx(-5.0f));
	REQUIRE((e * b).e_10 == Approx(-3.0f));
	REQUIRE((e * b).e_01 == Approx(-8.0f));
	REQUIRE((e * b).e_11 == Approx(-2.0f));

}

TEST_CASE("describe_detMat2", "[mat]")
{
	Mat2 a;
	Mat2 b{ 5.0f, 3.0f, 8.0f, 2.0f };
	Mat2 c{ 0.0f, 0.0f, 0.0f, 0.0f };
	Mat2 d{ -1.0f, 0.0f, 0.0f, -1.0f };


	REQUIRE(a.det() == Approx(1.0f));
	REQUIRE(b.det() == Approx(-14.0f));
	REQUIRE(c.det() == Approx(0.0f));
	REQUIRE(d.det() == Approx(1.0f));
}

TEST_CASE("describe_Mat2multiplyVec2", "[mat]")
{
	Mat2 a;
	Mat2 b{ 5.0f, 3.0f, 8.0f, 2.0f };
	Mat2 c{ 0.0f, 0.0f, 0.0f, 0.0f };
	Mat2 d{ -1.0f, 0.0f, 0.0f, -1.0f };
	Vec2 e;
	Vec2 f{ 5.1f, -9.3f };

	REQUIRE((a * f).x == Approx(5.1f));
	REQUIRE((a * f).y == Approx(-9.3f));

	REQUIRE((b * e).x == Approx(0.0f));
	REQUIRE((b * e).y == Approx(0.0f));

	REQUIRE((c * f).x == Approx(0.0f));
	REQUIRE((c * f).y == Approx(0.0f));

	REQUIRE((d * f).x == Approx(-5.1f));
	REQUIRE((d * f).y == Approx(9.3f));
}

TEST_CASE("describe_inverseMat2", "[mat]")
{
	Mat2 a;
	Mat2 b{ 5.0f, 3.0f, 8.0f, 2.0f };
	Mat2 c{ 0.0f, 0.0f, 0.0f, 0.0f };
	Mat2 d{ -1.0f, 0.0f, 0.0f, -1.0f };


	REQUIRE((inverse(a)).e_00 == Approx(1.0f));
	REQUIRE((inverse(a)).e_10 == Approx(0.0f));
	REQUIRE((inverse(a)).e_01 == Approx(0.0f));
	REQUIRE((inverse(a)).e_11 == Approx(1.0f));

	REQUIRE((inverse(b)).e_00 == Approx(-1.0f/7.0f));
	REQUIRE((inverse(b)).e_10 == Approx(8.0f/14.0f));
	REQUIRE((inverse(b)).e_01 == Approx(3.0f/14.0f));
	REQUIRE((inverse(b)).e_11 == Approx(-5.0f/14.0f));

	REQUIRE((inverse(d)).e_00 == Approx(-1.0f));
	REQUIRE((inverse(d)).e_10 == Approx(0.0f));
	REQUIRE((inverse(d)).e_01 == Approx(0.0f));
	REQUIRE((inverse(d)).e_11 == Approx(-1.0f));


	
}

TEST_CASE("describe_transposeMat2", "[mat]")
{
	Mat2 a;
	Mat2 b{ 5.0f, 3.0f, 8.0f, 2.0f };
	Mat2 c{ 2.0f, -2.0f, 2.0f, -2.0f };
	



	REQUIRE((transpose(a)).e_00 == Approx(1.0f));
	REQUIRE((transpose(a)).e_10 == Approx(0.0f));
	REQUIRE((transpose(a)).e_01 == Approx(0.0f));
	REQUIRE((transpose(a)).e_11 == Approx(1.0f));

	REQUIRE((transpose(b)).e_00 == Approx(5.0f));
	REQUIRE((transpose(b)).e_10 == Approx(8.0f));
	REQUIRE((transpose(b)).e_01 == Approx(3.0f));
	REQUIRE((transpose(b)).e_11 == Approx(2.0f));

	REQUIRE((transpose(c)).e_00 == Approx(2.0f));
	REQUIRE((transpose(c)).e_10 == Approx(2.0f));
	REQUIRE((transpose(c)).e_01 == Approx(-2.0f));
	REQUIRE((transpose(c)).e_11 == Approx(-2.0f));
}

TEST_CASE("describe_makeRotationmMat2", "[mat]")
{

	REQUIRE((make_rotation_mat2(M_PI)).e_00 == Approx(-1.0f));
	REQUIRE((make_rotation_mat2(M_PI)).e_10 == Approx(0.0f));
	REQUIRE((make_rotation_mat2(M_PI)).e_01 == Approx(0.0f));
	REQUIRE((make_rotation_mat2(M_PI)).e_11 == Approx(-1.0f));

	REQUIRE((make_rotation_mat2(-M_PI)).e_00 == Approx(-1.0f));
	REQUIRE((make_rotation_mat2(-M_PI)).e_10 == Approx(0.0f));
	REQUIRE((make_rotation_mat2(-M_PI)).e_01 == Approx(0.0f));
	REQUIRE((make_rotation_mat2(-M_PI)).e_11 == Approx(-1.0f));

	REQUIRE((make_rotation_mat2(0)).e_00 == Approx(1.0f));
	REQUIRE((make_rotation_mat2(0)).e_10 == Approx(0.0f));
	REQUIRE((make_rotation_mat2(0)).e_01 == Approx(0.0f));
	REQUIRE((make_rotation_mat2(0)).e_11 == Approx(1.0f));

	REQUIRE((make_rotation_mat2(M_PI_2)).e_00 == Approx(0.0f));
	REQUIRE((make_rotation_mat2(M_PI_2)).e_10 == Approx(1.0f));
	REQUIRE((make_rotation_mat2(M_PI_2)).e_01 == Approx(-1.0f));
	REQUIRE((make_rotation_mat2(M_PI_2)).e_11 == Approx(0.0f));
}

TEST_CASE("describe_makeRotationmMat2", "[mat]")
{
	Color a;
	REQUIRE(a.r == Approx(0.5f));
	REQUIRE(a.g == Approx(0.5f));
	REQUIRE(a.b == Approx(0.5f));
}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
