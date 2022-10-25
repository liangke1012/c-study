//
// Created by liangke on 2022/10/25.
//
#include <iostream>
using namespace std;
int main(){
    char a[] = "hello world wrwrqwqw";
    char *p = a;
    cout << p[0] <<endl;
    cout << sizeof(a) << endl;//21
    cout << sizeof(p) << endl;//8（64位系统）
    char b[100];
    strcpy(b,a); // 不能b =a
    cout << b << endl;
    if(strcmp(b,a) == 0){
        cout << "a= b" <<endl;
    }
    return 0;
}