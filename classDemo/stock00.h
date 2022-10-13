//
// Created by liangke on 2022/8/14.
//

#ifndef LIANGKEDEMO_STOCK00_H
#define LIANGKEDEMO_STOCK00_H

#include <iostream>
using namespace std;
class Stock{
private:
    string company;
    long shares;
    double share_val;
    double total_val;
    void set_total(){
        total_val = share_val * shares;
    };
public:
    Stock();
    Stock(const string & co, long n =0, double pr = 0.0);
    ~Stock();
    void acqure(const string & co, long n, double pre);
    void buy(long num,double price);
    void sell(long num, double price);
    void update(double price);
    void show();

};
#endif //LIANGKEDEMO_STOCK00_H
