//
// Created by liangke on 2022/10/21.
//
#include <iostream>
using namespace std;

void Swap(int &x, int &y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}
int main()
{
    int a = 10,b = 20;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    Swap(a,b);
    cout<<"Swap后"<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
}