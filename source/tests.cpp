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
	REQUIRE(a.x == Approx(8.3f));
	REQUIRE(a.y == Approx(-7.2f));

	d += c;
	REQUIRE(a.x == Approx(3.2f));
	REQUIRE(a.y == Approx(2.1f));


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

	b += d;
	REQUIRE(a.x == Approx(1.9f));
	REQUIRE(a.y == Approx(-11.4f));

	d += c;
	REQUIRE(a.x == Approx(-3.2f));
	REQUIRE(a.y == Approx(-2.1f));


}

TEST_CASE("describe_scalarMultVec2", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };

	REQUIRE((a*0.0f).x == Approx(0.0f));
	REQUIRE((a*0.0f).y == Approx(0.0f));

	REQUIRE((a * 20.0f).x == Approx(0.0f));
	REQUIRE((a * -20.0f).y == Approx(0.0f));

	REQUIRE((b * 2.0f).x == Approx(10.2f));
	REQUIRE((b * 2.0f).y == Approx(-18.6f));

	REQUIRE((b * -1.0f).x == Approx(-5.1f));
	REQUIRE((b * -1.0f).y == Approx(9.3f));

	REQUIRE((b * 0.5f).x == Approx(2.55f));
	REQUIRE((b * 0.5f).y == Approx(4.65f));


}

TEST_CASE("describe_scalarDivisVec2", "[vec2]")
{
	Vec2 a;
	Vec2 b{ 5.1f, -9.3f };

	

	REQUIRE((a / 20.0f).x == Approx(0.0f));
	REQUIRE((a / -20.0f).y == Approx(0.0f));

	REQUIRE((b / 0.5f).x == Approx(10.2f));
	REQUIRE((b / 0.5f).y == Approx(-18.6f));

	REQUIRE((b / -1.0f).x == Approx(-5.1f));
	REQUIRE((b / -1.0f).y == Approx(9.3f));

	REQUIRE((b / 2.0f).x == Approx(2.55f));
	REQUIRE((b / 2.0f).y == Approx(4.65f));


}



int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
