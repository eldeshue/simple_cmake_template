# Project Description
SIMD(SSE)를 적용하여 최적화를 수행한 수학 라이브러리. 행렬, 벡터, 쿼터니언과 관련 연산 및 알고리즘을 구현함.
ecole42의 graphics 과제에 사용할 예정.

# How to use
## 1. static linking
다음과 같이 빌드하여 include 내에 있는 ```aft_math.h``` 헤더와 함께 ```libaft_math.so```로 static linking한다.

## 2. project include
해당 repo 전체를 submodule로 포함한다. 프로젝트가 CMake를 사용하는 경우 유효하다.

# Warning
## SSE Memory alignment
내부적으로 SSE를 사용하는 관계로, memory alignment 이슈가 존재한다.
따라서, 다음과 같은 경우를 주의해야 한다.
