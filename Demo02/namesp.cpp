//
// Created by liangke on 2022/8/14.
//
#include <iostream>
#include "namesp.h"
using namespace std;
namespace pers{
    void getPerson(Person & rp){
        cout << "Enter first Name: ";
        cin >> rp.fname;
        cout << "Enter last Name: ";
        cin >> rp.lname;
    }
    void showPerson(const Person & rp){
        cout << rp.fname << ", " << rp.lname << endl;
    }
}

namespace debet{
    void getDebet(Debt & rd){
        getPerson( rd.name);
        cout << " Enter debet: ";
        cin >> rd.amount;
    }
    void showDebet(const Debt & rd){
        showPerson(rd.name);
        cout << "amount: " << rd.amount << endl;
     }
    double sumDebets(const Debt ar[], int n){
        double total = 0;
        for(int i = 0;i < n;i++){
            total += ar[i].amount;
        }
        return total;
    }
}