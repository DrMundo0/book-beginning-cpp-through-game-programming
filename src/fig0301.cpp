#include <iostream>

#include "fig0301.hpp"

using namespace std;

// 演示for循环的用法
int Fig0301::startup() {
    cout << "Counting with null statements:\n";
    int count = 0;

    // 初始和递增部分不一定非要写在for后的括号中，也可以分开写，所以要灵活
    for (; count < 10;) {
        cout << count << "\n";
        ++count;
    }

    return 0;
}
