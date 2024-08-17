#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h" 
#include "Palindrome.h"

using std::string;
using std::vector;

TEST_CASE("Identity"){
	CHECK_EQ(1, identity(1));
	CHECK_EQ("asdfasdf", identity("asdfasdf"));
	CHECK_EQ(vector{1, 2, 3}, identity(vector{1, 2, 3}));

}

TEST_CASE("Palindrome"){
	CHECK(isStringPalindrome("asddsa"));
	CHECK(isStringPalindrome("12321"));
	CHECK_FALSE(isStringPalindrome("123123"));
	CHECK_FALSE(isStringPalindrome("asd"));
}

enum Token{
	X, Y
};

TEST_CASE("Extreme polymorphic palindrome"){
	CHECK(isPalindrome(string("asddsa")));
	CHECK(isPalindrome(vector<string>{"asd", "dsa", "dsa", "asd"}));
	CHECK(isPalindrome(vector<Token>{Token::X, Token::Y, Token::Y, Token::X}));
	// Uncomment to see the complicated compile error
	// CHECK(isPalindrome(123));
}
