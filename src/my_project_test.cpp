#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../include/my_project.hpp"


TEST_CASE("Mutiplications are computed", "[multiply]") {
	REQUIRE( multiply(2,3) == 6);
	REQUIRE( multiply(1,2) == 2);
	REQUIRE( multiply(0,5) == 0);
}