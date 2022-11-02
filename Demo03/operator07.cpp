//
// Created by liangke on 2022/11/2.
//
/**
 * 左移运算符重载
 *作用：可以输出自定义数据类型
 */
#include <iostream>
#include <string.h>

using namespace std;
class Person {
    friend ostream& operator<<(ostream& out, Person& p);
public:
    Person(int a, int b){
        this->m_A = a;
        this->m_B = b;
    }
    //成员函数 实现不了  p << cout 不是我们想要的效果
    //void operator<<(Person& p){
    //}
private:
    int m_A;
    int m_B;
};
//全局函数实现左移重载
//ostream对象只能有一个
ostream& operator<<(ostream& out, Person& p) {
    out << "a:" << p.m_A << " b:" << p.m_B;
    return out;
}
int main() {
    Person p1(10, 20);
    cout << p1 << "hello world" << endl; //链式编程
    return 0;
}