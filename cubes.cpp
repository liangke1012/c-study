//
// Created by liangke on 2022/8/12.
//
#include <iostream>
using namespace std;

double recube(const double &ra);

int main(){
    double side = 3.0;
    double * pd = &side;
    double & rd = side;
    long edge = 5L;
    double lens[4] = {2.0,5.0,10.0,12.0};;
    double c1 = recube(side);
    double c2 = recube(lens[2]);
    double c3 = recube(rd);
    double c4 = recube(*pd);
    double c5 = recube(edge);
    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;
    cout << c4 << endl;
    cout << c5 << endl;
    return 0;
}

double recube(const double &ra){
    return ra*ra*ra;
}
