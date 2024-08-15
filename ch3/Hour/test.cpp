#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "Hour.h"
//#define SEE_COMPILATION_ERROR_FOR_INVALID_VALUE

TEST_CASE("Valid hour"){
	constexpr Hour h = Hour::make<10>(); 

	CHECK_EQ(10, h.value());
}

#ifdef SEE_COMPILATION_ERROR_FOR_INVALID_VALUE
TEST_CASE("Invalid hour"){
	constexpr Hour h2 = Hour::make<30>();
}
#endif

