#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "prod.h"

TEST_CASE("Test Example"){
	auto anAnswer = answer();

	CHECK(anAnswer);
}
