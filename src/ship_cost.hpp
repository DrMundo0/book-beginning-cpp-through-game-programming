#include <iostream>

using std::cout;
using std::endl;

int fn01() {
    // 定义了值的枚举
    enum shipCost { FIGHTER_COST = 20, BOMBER_COST, CRUISER_COST = 50 };

    shipCost myShipCost = BOMBER_COST;
    // 显式强制转换
    return static_cast<int>(myShipCost);
}
