//
// Created by liangke on 2022/11/2.
//
#include <iostream>
using namespace std;
int func(int a, int b = 10, int c = 10) {
    return a + b + c;
}

int func2(int a = 10, int b = 10);
int func2(int a, int b) {
    return a + b;
}
void func3(int a, int b = 10)
{
    cout << "func3(int a, int b = 10) 调用" << endl;
}
void func3(int a)
{
    cout << "func4(int a) 调用" << endl;
}
int main() {
    cout << "ret = " << func(20, 20) << endl;
    cout << "ret = " << func(100) << endl;
    cout << "ret = " << func(100) << endl;
    cout << "ret = " << func2(100,100) << endl;
   // func3(10); //碰到默认参数产生歧义，需要避免
    return 0;
}