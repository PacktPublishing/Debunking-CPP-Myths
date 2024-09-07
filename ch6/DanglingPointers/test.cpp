#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "danglingpointers.h"

TEST_CASE("Try dangling pointer"){
	int result = danglingPointer();

	CHECK_EQ(234, result);
}

