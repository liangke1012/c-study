//
// Created by liangke on 2022/8/12.
//
#include <iostream>
using namespace std;

void oil(int x);
int main(){
    int text = 10;
    int year = 2022;
    cout << "In main text = " << text << "   " << &text << endl;
    cout << "In main year = " << year << "   " << &year << endl;
    oil(text);
    cout << "In main text = " << text << "   " << &text << endl;
    cout << "In main year = " << year << "   " << &year << endl;
    return 0;
}

void oil(int x){
    int text = 5;
    cout << "oil text = " << text << "   " << &text << endl;
    cout << "oil x = " << x << "   " << &x << endl;
    {
        int text = 50;
        cout << "In block text = " << text << "   " << &text << endl;
        cout << "In block x = " << x << "   " << &x << endl;
    }
}