//
// Created by liangke on 2022/8/10.
//
#include <iostream>
using namespace std;

int main() {
    int score[10];

    score[0] = 11;
    score[1] = 44;
    score[6] = 432;

    cout << "数组首地址为：" << score << endl;
    cout << "数组中第一个元素地址为： " << &score[0] <<endl;
    cout << "数组中第二个元素地址为： " << &score[1] <<endl;
    return 0;
}
