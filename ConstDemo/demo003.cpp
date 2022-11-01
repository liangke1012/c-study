//
// Created by liangke on 2022/10/31.
//
#include <iostream>
using namespace std;

class Stack{
public:
    void Push(int elem);
    int Pop(void);
    int GetCount(void) const; // const 成员函数
private:
    int m_num;
    int m_data[100];
};
int Stack::GetCount(void)const
{
    //++ m_num; // 编译错误，企图修改数据成员m_num
    //Pop();// 编译错误，企图调用非const函数
    return m_num;
}

