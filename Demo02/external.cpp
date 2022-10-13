//
// Created by liangke on 2022/8/14.
//
#include <iostream>
#include "support.cpp"
using namespace std;

double warming = 0.3;
void update(double dt);
void local();

int main(){
    cout << " global warming : " << warming << endl;
    update(0.1);
    cout << " global warming : " << warming << endl;
    local();
    cout << " global warming : " << warming << endl;
    return 0;
}

