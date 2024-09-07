#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "vectorbounds.h"

TEST_CASE("try vector bounds"){
	int result = doSomeWork(1, 234, 543, 23423);

	CHECK_EQ(1 + 234 + 543 + 23423, result);
}
