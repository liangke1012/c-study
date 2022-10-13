//
// Created by liangke on 2022/10/11.
//
#include<iostream>
using namespace std;

class person{
public:
    int age;
};
// 左操作数的类型必须被显式指定
// 此处指定的类型为person类
bool operator==(person const& p1 ,person const& p2){
    if (p1.age == p2.age)
    {return true;}else
    {
        return false;
    }
}
int main()
{
    person p1;
    person p2;
    p1.age = 18;
    p2.age = 18;
    if (p1 == p2)
    {
        cout << "p1 is equal with p2." << endl;
    }
    else
    {
        cout << "p1 is NOT equal with p2." << endl;
    }

    return 0;
}