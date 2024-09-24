#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <vector>
#include "main.h"

using std::vector;

TEST_CASE("sum of squares in parallel") {
	vector<int> numbers{234, 423, 345, 212, 112, 2412};

	CHECK_EQ(6227942, sumOfSquares(numbers));
}

