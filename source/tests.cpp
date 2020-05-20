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



int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
