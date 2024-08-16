#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "HourRuntime.h"

TEST_CASE("Valid hour"){
	Hour hour(10); 

	CHECK_EQ(10, hour.value());
}

TEST_CASE("Invalid hour"){
	CHECK_THROWS(Hour(30));
}
