//
// Created by liangke on 2022/8/14.
//
#include <iostream>
#include "stock00.h"
#include "stock00.cpp"
using namespace std;

int main(){
    Stock lk;
    lk.acqure("liangke",10,54);
    lk.show();
    lk.buy(12,5);
    lk.show();
    lk.sell(2,33);
    lk.show();

    return 0;
}


