#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

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

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
