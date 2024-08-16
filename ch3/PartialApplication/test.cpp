#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "add.h"

TEST_CASE("add"){
	CHECK_EQ(10, add(4, 6));
}

TEST_CASE("increment"){
	CHECK_EQ(10, increment(9));
}

