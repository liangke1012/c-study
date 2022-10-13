//
// Created by liangke on 2022/10/12.
//
#include <iostream>
using namespace std;
class father {
public:
    void func1() { std::cout << "this is father func1" << std::endl; }

    virtual void func2() { std::cout << "this is father func2" << std::endl; }
    virtual ~father(){std::cout << "destruct father" << std::endl;}
};
class son:public father {
    public:
        void func1() { std::cout << "this is son func1" << std::endl; }

        void func2() {std::cout << "this is son func2" << std::endl;}
        ~son(){std::cout << "destruct son" << std::endl;};
};
int main() {
    father *f1 = new son;
    f1->func1();
    f1->func2();
    delete f1;
    return 0;
}

