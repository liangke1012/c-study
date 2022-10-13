//
// Created by liangke on 2022/10/11.
//
#include <iostream>
using namespace std;
class A{
public:
    mutable int var;
    void setVar(int a)
    {var = a;}
    operator int()//将类A对象隐式转化为int类型
    {return var;}
};
int main(){
    A func;
    func.setVar(10);
    cout << func << endl;//实际上调用的是func.operator int()这个函数
    return 0;
}

