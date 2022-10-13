//
// Created by liangke on 2022/10/11.
//
#include <iostream>
using namespace std;
class A
{
public:
    mutable int var;
    int operator() (int value) //重载()运算符，传入int的参数，operator()可以传入无限制的参数
    {
        return value > var ? value : var-value;
    }
};

int main()
{
    int i = 3;
    A func;
    std::cout << func(i) << std::endl; //实际上调用的是func.operator()(i)这个函数
    return 0;
}
