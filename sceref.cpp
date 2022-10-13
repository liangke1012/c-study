//
// Created by liangke on 2022/8/11.
//
#include <iostream>
using namespace std;

int main(){
    int a = 101;
    int & b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "a addiess: " << &a << endl;
    cout << "b addressL " << &b << endl;

    int c = 1000;
    b = c;
    cout << "c = " << c << endl;
    cout << "a = " << a << endl;

    cout << "c addiess: " << &c << endl;
    cout << "b address: " << &b << endl;
    return 0;
}
