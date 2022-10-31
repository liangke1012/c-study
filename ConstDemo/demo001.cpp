//
// Created by liangke on 2022/10/28.
//
#include <iostream>
using namespace std;

int main(){
    int a = 20;
    const int * p = &a;
   // *p = 10;  //尝试修改 *p 的值，是不被允许的
    a =30;//修改a是可以的，因为a是普通变量。
    int b = 10;
    p = &b;
    cout << *p <<endl;

    const int c = 30;
    //int *p1 = &c;
    const int* p1 = &c; //VALID
    cout << *p1 <<endl;
    return 0;
}
