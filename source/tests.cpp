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



int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
