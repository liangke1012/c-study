//
// Created by liangke on 2022/8/11.
//
#include <iostream>
using namespace std;

int * func()
{
    int a = 10;
    return &a;
}

int main() {
    int *p = func();

    cout << *p << endl;
    cout << *p << endl;
    return 0;
}
