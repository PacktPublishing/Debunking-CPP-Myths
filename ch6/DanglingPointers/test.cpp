#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "danglingpointers.h"

TEST_CASE("try pointer bounds"){
	int result = danglingPointer();

	CHECK_EQ(234, result);
}

