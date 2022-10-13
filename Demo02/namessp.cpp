//
// Created by liangke on 2022/8/14.
//
#include <iostream>
#include "namesp.h"
#include "namesp.cpp"
using namespace std;

void other(void);
void another(void);
int main(){
    using debet::Debt;
    using debet::showDebet;
    Debt harry = {{"harry","potter"},120.0};
    showDebet(harry);
    other();
    another();
    return 0;
}

void other(){
    using namespace debet;
    Person lk = {"liang","ke"};
    showPerson(lk);
    cout << endl;
    Debt zi[3];
    int i;
    for(i = 0;i < 3;i++){
        getDebet(zi[i]);
    }
    for(i = 0;i < 3;i++){
        showDebet(zi[i]);
    }
    cout << "total : " << sumDebets(zi,3) << endl;
}

void another(){
    using pers::Person;
    Person yn = {"yuan","nan"};
    pers::showPerson(yn);
    cout << endl;
}

