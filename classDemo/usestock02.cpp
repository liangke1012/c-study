//
// Created by liangke on 2022/8/15.
//
#include "stock00.h"
#include "stock00.cpp"
using namespace std;

int main() {
    cout << "use constructors to create new objects" << endl;
    Stock stock1("nanosmart",12,20.0);
    stock1.show();

    Stock stock2("Boffo",2,200.0);
    stock2.show();

    cout << "______________" << endl;
    stock2 = stock1;
    stock1.show();
    stock2.show();
    return 0;
}