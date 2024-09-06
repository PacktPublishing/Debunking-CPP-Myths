#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "arraybounds.h"

TEST_CASE("try array bounds"){
	int result = doSomeWork(1, 234, 543, 23423);

	CHECK_EQ(1 + 234 + 543 + 23423, result);
}
