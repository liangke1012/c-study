//
// Created by liangke on 2022/10/11.
//

#include<iostream>
using namespace std;
class Base1//父类(第一个父亲)
        {
                public:
                int m_A;
                Base1()
                {
                    m_A = 100;
                }
        };
class Base2//父类（第二个父亲）
{
public:
    int m_B;
    int m_A;
    Base2()
    {
        m_B = 200;
        m_A = 600;
    }
};
class son :public Base1, public Base2//子类，此时子类既继承Base1也继承Base2
{
public:
    int m_B;
    int m_A;
    son()
    {
        m_B = 300;
        m_A = 400;
    }
};
void test03()//测试案例三
{
    son p;
    cout<<p.m_B<<endl;
    cout<<p.Base2::m_B<<endl;
    cout<<p.Base1::m_A<<endl;//若此时出现了同名成员，依然通过作用域来进行区分
    //在子类p中既可以访问到m_A的值，也可以访问到m_B的值，此时实现了多继承
}

int main() {

    test03();

    return 0;
}