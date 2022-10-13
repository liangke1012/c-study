//
// Created by liangke on 2022/8/14.
//
#include <iostream>
#include "stock00.h"

Stock::Stock() {
    cout << "default constructor called " << endl;
    company = "no name";
    shares = 0;
    share_val = 0;
    total_val = 0;
}

Stock::Stock(const string & co, long n, double pr) {
    cout << "constructor using " << endl;
    company = co;
    shares = n;
    share_val = pr;
    set_total();
}

Stock::~Stock() {
    cout << "Bye" << endl;
}

void Stock::show() {
      cout << "company : " << company;
      cout << "    shares:   " << shares;
      cout << "    shares price:  " << share_val;
      cout << "    total value :" << total_val << endl;

}

void Stock::acqure(const std::string &co, long n, double pre) {
    company = co;
    if(n < 0){
        cout << "number of share < 0" << endl;
    }else{
        shares = n;
    }
    share_val = pre;
    set_total();
}

void Stock::buy(long num, double price) {
    if(num < 0){
        cout << "error! " << endl;
    }else{
        shares += num;
        share_val = price;
        set_total();
    }

}
void Stock::sell(long num, double price) {
    if(num < 0){
        cout << "error! " << endl;
    }else if(num > shares){
        cout << "num > shares,error! " << endl;
    }else{
        shares -= num;
        share_val = price;
        set_total();
    }

}

void Stock::update(double price) {
    shares = price;
    set_total();
}
