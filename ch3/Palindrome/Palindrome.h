#include <string>
#include <ranges>

auto identity(const auto value){ return value; }

bool isStringPalindrome(std::string value){
	std::vector<char> characters(value.begin(), value.end());
	std::vector<char> reversedCharacters;
	std::reverse_copy(characters.begin(), characters.end(), std::back_insert_iterator(reversedCharacters));
	return characters == reversedCharacters;
}

bool isPalindrome(auto value){
	auto tokens = value | std::views::all;
	auto reversedTokens = value | std::views::reverse;
	return std::equal(tokens.begin(), tokens.end(), reversedTokens.begin());
};
