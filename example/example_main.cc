#include <iostream>
#include <MyProject/example.hpp>

int main() {
	std::cout << "2 + 3 = " << MyProject::add(2, 3) << std::endl;
	MyProject::fmt_test_func();
}
