#include <limits>
#include <iostream>
#include <string>

#include "fig0304.hpp"

// 明确声明需要哪些元素
using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::string;

// 为类型定义新的名称
typedef unsigned short int ushort;

int main(int argc, char *argv[]) {
    // 常量
    const int ALIEN_POINTS = 150;
    int intMax = numeric_limits<int>::max();
    // 自定义枚举
    enum difficulty { NOVICE, EASY, NORMAL, HARD, UNBEATABLE };
    // 使用自定义枚举
    difficulty myDifficulty = EASY;

    cout << "Game Over v3, " << 7 / 3.0 << ", intMax: " << intMax << ", myDifficulty: " << myDifficulty << endl;
    Fig0304::startup();

    return 0;
}
