#include <vector>
using std::vector;
int doSomeWork(int value1, int value2, int value3, int value4) { 
	vector<int> values;
	values.at(0) = value1;
	values.at(1) = value2;
	values.at(3) = value3;
	values.at(4) = value4;
	return values[0] + values[1] + values[3] + values[4];
} 
