#include <iostream>
#include <string>

#include "fig0303.hpp"

using namespace std;

// 演示字符串的使用方法
int Fig0303::startup() {
    // 创建字符串的三种方式
    // 1. 直接赋值
    string word1 = "Game";
    // 2. 使用小括号
    string word2("Over");
    // 3. 第一个参数是重复次数，第二个参数是要重复的字符
    string word3(3, '!');

    // 连接字符串的方法
    string phrase = word1 + " " + word2 + word3;
    cout << "The phrase is: " << phrase << "\n\n";
    // 查字符串的长度
    cout << "The phrase has " << phrase.size() << " characters in it.\n\n";
    // 根据索引下标取出字符串中的某个字符，从0开始
    cout << "The character at position 0 is: " << phrase[0] << "\n\n";
    cout << "Changing the character at position 0.\n";
    // 更新字符串中的某个字符
    phrase[0] = 'L';
    cout << "The phrase is now: " << phrase << "\n\n";

    // 遍历字符串成员所使用的是unsigned int，对应size()返回的类型
    for (unsigned int i = 0; i < phrase.size(); ++i) {
        cout << "Character at positon " << i << " is: " << phrase[i] << endl;
    }

    cout << "\nThe sequence 'Over' begins at location ";
    // 检查某个字符串是否存在与某字符串中，会返回第一个字符的下标
    cout << phrase.find("Over") << endl;

    // find的第二种用法，指定从哪里开始找，若find找不到子字符串会返回string::npos常量的值，C++中并不返回-1发现没？而是一个极大的值
    if (phrase.find("eggplant", 5) == string::npos) {
        cout << "'eggplant' is not in the phrase.\n\n";
    }

    // 从下标4开始删除5个字符
    phrase.erase(4, 5);
    cout << "The phrase is now: " << phrase << endl;

    // 从下标4开始删除直到结尾的字符
    phrase.erase(4);
    cout << "The phrase is now: " << phrase << endl;

    // 删除所有字符，将变为空字符串
    phrase.erase();
    cout << "The phrase is now: " << phrase << endl;

    // 验证字符串是否为空字符串，注意不是null
    if (phrase.empty()) {
        cout << "\nThe phrase is no more.\n";
    }

    return 0;
}
