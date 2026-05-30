cmake_minimum_required(VERSION 2.8)

# 项目名称和语言
project(book_beginning_cpp_through_game_programming LANGUAGES CXX)

# 设置 C++ 标准（例如 C++17）
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE "Debug")

# 添加子目录 src，CMake 会去 src 目录下寻找另一个 CMakeLists.txt
add_subdirectory(src)
