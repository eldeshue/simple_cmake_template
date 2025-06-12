cmake_minimum_required(VERSION 3.23)

# 현재 디렉토리에 있는 모든 파일을 SRC_FILES 변수에 추가한다.
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

# add_executable(타겟_실행파일_이름 ${SRC_FILES})
# target_link_libraries(타겟_실행파일_이름 PUBLIC 링크할라이브러리이름)

# add_library(타겟_라이브러리_이름 STATIC ${SRC_FILES})
# target_link_libraries(타겟_라이브러리_이름 PUBLIC 링크할라이브러리이름)
add_library(Mylib STATIC ${SRC_FILES})
