#include <iostream>

template <typename T>
auto getDefaultValue() -> T {
    return T(42.5);
}

int main() {
    std::cout << getDefaultValue<int>() << std::endl;   // 明确指定返回类型为 int
    std::cout << getDefaultValue<double>() << std::endl; // 明确指定返回类型为 double
    return 0;
}