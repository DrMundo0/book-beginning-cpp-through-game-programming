// 随机数生成相关
#include <cstdlib>
// 时间相关
#include <ctime>
#include <iostream>

using namespace std;

// 演示随机数的生成
int run() {
    // 基于当前日期、时间作为随机种子
    srand(static_cast<unsigned int>(time(0)));
    // 生成0～32737之间的随机整数
    int randomNumber = rand();
    // 任意正整数除以6的余数都在0～5之间，所以加1会让随机数的范围在1～6之间，满足实际的色子点数范围
    int die = (randomNumber % 6) + 1;
    // 这个随机数的生成概率并不是平均的，有些数字出现的概率会较大
    cout << "You rolled a " << die << endl;
    return randomNumber;
}
