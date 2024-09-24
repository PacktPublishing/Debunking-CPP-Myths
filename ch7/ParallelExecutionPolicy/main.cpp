#include <vector>
#include <algorithm>
#include <execution>
#include "main.h"

using std::vector;
using std::transform;
using std::plus;
using std::back_inserter;
using std::reduce;

long long sumOfSquares(const vector<int> numbers){
	vector<long long> squaredNumbers(numbers.size());
	auto squareNumber = [](const long it ){ return it * it; };

	transform(std::execution::par, numbers.begin(), numbers.end(), squaredNumbers.begin(), squareNumber);

	return reduce(std::execution::par, squaredNumbers.begin(), squaredNumbers.end(), 0);
}
