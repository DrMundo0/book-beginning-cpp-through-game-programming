cmake_minimum_required(VERSION 2.8)

# 项目名称和语言
project(book_beginning_cpp_through_game_programming LANGUAGES CXX)

# 设置 C++ 标准（例如 C++17）
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE "Debug")

# build target 放到target目录中
# add_executable(target/a.out ${DIR_SRCS})
add_subdirectory(src)
