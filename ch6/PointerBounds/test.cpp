#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "pointerbounds.h"

TEST_CASE("try pointer bounds"){ 
	int result = pointerBounds(); 

	CHECK_EQ(2423, result); 
} 
