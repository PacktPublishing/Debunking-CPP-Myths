#include <memory>

using std::unique_ptr;
using std::make_unique;

int danglingPointer() {
	unique_ptr<int> aPointerToInt = make_unique<int>(234);
	return *aPointerToInt;
}
