#include <MyProject/example.hpp>
#include <string>
#include <vector>

// vcpkg로 추가한 fmt 라이브러리의 핵심 헤더를 포함합니다.
#include <fmt/ranges.h>

namespace MyProject {
	int add(int a, int b) {
		return a + b;
	}
	int fmt_test_func() {
		// fmt 테스트, vcpkg 통합 결과 확인
		// 1. 기본 사용법: C-style 포맷팅과 유사하게 변수를 출력합니다.
		std::string name = "GraphRunner";
		int version_major = 0;
		int version_minor = 1;

		fmt::print("== < external package fmt running test start > ==\n");
		fmt::print("Welcome to {} v{}.{}!\n", name, version_major, version_minor);
		// std::cout << fmt::format(...)와 동일한 기능을 더 간결하게 제공합니다.


		// 2. 인덱스 기반 포맷팅: 인자의 순서를 바꿀 수 있습니다.
		fmt::print("Project: {0}, Version: {1}.{2}. Welcome to {0}!\n", name, version_major, version_minor);


		// 3. 이름 기반 포맷팅 (C++20 기능, fmt 9.0 이상)
		// fmt::print("Hello, {project_name}\n", fmt::arg("project_name", name));


		// 4. 다양한 타입 출력: 숫자, 문자열 등을 자연스럽게 처리합니다.
		double pi = 3.14159;
		fmt::print("Value of PI: {:.2f}\n", pi); // 소수점 2자리까지 출력


		// 5. 범위(Ranges) 출력 (fmt/ranges.h 필요)
		std::vector<int> numbers = { 1, 2, 3, 4, 5 };
		fmt::print("Numbers: {}\n", numbers);
		fmt::print("== < external package fmt running test done > ==\n");

		return 0;
	}
}
