//============================================================================
// Name        : my_project.cpp
// Author      : Paul Blay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#define CATCH_CONFIG_MAIN

#include <iostream>
#include <catch2/catch.hpp>


using namespace std;


int multiply(int x, int y)
{
	return x*y;
}

TEST_CASE("Mutiplications are computed", "[multiply]") {
	REQUIRE( multiply(2,3) == 6);
	REQUIRE( multiply(1,2) == 2);
	REQUIRE( multiply(0,5) == 0);
}