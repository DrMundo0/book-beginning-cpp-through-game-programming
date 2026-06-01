#include <cstdlib>
#include <ctime>
#include <iostream>
// 在body文件中需要引入head文件
#include "fig0215.hpp"

using namespace std;

// 演示猜数游戏
int Fig0215::startup() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int tries = 0;
    int guess;

    cout << "Welcome to Guess My Number\n\n";

    do {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;

        if (guess > secretNumber) {
            cout << "Too high!\n";
        } else if (guess < secretNumber) {
            cout << "Too low!\n";
        } else {
            cout << "That's it! You got it in " << tries << " guesses!\n";
        }
    } while (guess != secretNumber);
    
    return 0;
}
