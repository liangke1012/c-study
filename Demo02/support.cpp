//
// Created by liangke on 2022/8/14.
//
#include <iostream>
using namespace std;


extern double warming;
void update(double dt);
void local();

void update(double dt){
    extern double warming;
    warming += dt;
    cout << " update global warming to: " << warming << endl;
}

void local(){
    double warming = 0.8;
    cout << " local warming : " << warming << endl;
    cout << " but global warming : " << ::warming << endl;

}
