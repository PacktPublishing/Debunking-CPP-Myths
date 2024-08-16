#include <functional>

auto add = [](const int first, const int second){ return first + second; };

auto increment = std::bind(add, std::placeholders::_1, 1);
