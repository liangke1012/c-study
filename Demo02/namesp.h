//
// Created by liangke on 2022/8/14.
//
#ifndef LIANGKEDEMO_NAMESP_H
#define LIANGKEDEMO_NAMESP_H
#include <iostream>
using namespace std;
namespace pers{
    struct Person{
        string fname;
        string lname;
    };
    void getPerson(Person &);
    void showPerson(const Person &);
}

namespace debet {
    using namespace pers;
    struct Debt {
        Person name;
        double amount;
    };

    void getDebet(Debt &);

    void showDebet(const Debt &);

    double sumDebets(const Debt ar[], int n);
}
#endif //LIANGKEDEMO_NAMESP_H
