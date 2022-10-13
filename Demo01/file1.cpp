//
// Created by liangke on 2022/8/12.
//
#include <iostream>
#include "coordin.h"
#include "file2.cpp"
using namespace std;

int main(){

    rect rplace;
    polar pplace;
    while(cin >> rplace.x >> rplace.y){
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "next two numbers:";
    }
    cout << "bye! " << endl;
    return 0;
}