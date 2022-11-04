//
// Created by liangke on 2022/11/3.
//
/**
 * 左值与右值
 */
#include <iostream>
using namespace std;
class A {
public:
    A(int size) : size_(size) {
        data_ = new int[size];
    }
    A(){}
    A(const A& a) {
        size_ = a.size_;
        data_ = new int[size_];
        //data_ = a.data_;
        cout << "copy " << endl;
    }
    ~A() {
        delete[] data_;
    }
    int *data_;
    int size_;
};

int main(){
    int a1 = 4;
    int &b1 = a1;
    //int &&b1 = a1;// error, a1是左值
    int &&c = std::move(a1);

    A a(10);
    A b = a;
    cout << "b " << b.data_ << endl;
    cout << "a " << a.data_ << endl;

    return 0;
}