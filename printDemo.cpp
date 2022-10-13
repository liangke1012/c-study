//
// Created by liangke on 2022/8/10.
//
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int * p;
    p = &a;
    cout << &a << endl; //打印数据a的地址
    cout << p << endl;  //打印指针变量p

    cout << "*p = " << *p << endl;
    *p = 20;
    cout << a << endl;

    cout << &p << endl;
    return 0;
}
