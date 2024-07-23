#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "palindrome.h"

TEST_CASE("Palindromes"){
	CHECK(isPalindrome("anna"));
	CHECK(isPalindrome("civic"));
	CHECK(isPalindrome("deed"));
	CHECK(isPalindrome("level"));
	CHECK(isPalindrome("tenet"));
}


TEST_CASE("Not Palindromes"){
	CHECK_FALSE(isPalindrome("anya"));
	CHECK_FALSE(isPalindrome("civil"));
	CHECK_FALSE(isPalindrome("deer"));
	CHECK_FALSE(isPalindrome("leven"));
	CHECK_FALSE(isPalindrome("sonnet"));
}

TEST_CASE("Empty string"){
	CHECK(isPalindrome(""));
}


TEST_CASE("Single letter"){
	CHECK(isPalindrome("a"));
	CHECK(isPalindrome("y"));
}
