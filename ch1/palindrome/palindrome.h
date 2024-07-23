#include <string>
using string=std::string;

bool isPalindrome(const string& palindromeCandidate)
{
 	int frontIndex = 0;
 	int backIndex = palindromeCandidate.length() - 1;
	while (frontIndex < backIndex) {
		const char frontChar = palindromeCandidate[frontIndex];
		const char backChar = palindromeCandidate[backIndex];
		if (frontChar != backChar)
			return false;
		++frontIndex;
		--backIndex;
	}
	return true;
}
