#include <iostream>

namespace ns {
	double val = 10;
}

double val = 20;

int main(){
	using ns::val;
	std::cout << val << std::endl;
	std::cout << ::val << std::endl;
}