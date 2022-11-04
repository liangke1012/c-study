//
// Created by liangke on 2022/11/3.
//
/**
 * 移动语义
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
    A(A&& a) {
        this->data_ = a.data_;
        a.data_ = nullptr;
        cout << "move " << endl;
    }
    ~A() {
        if (data_ != nullptr) {
            delete[] data_;
        }
    }
    int *data_;
    int size_;
};
int main() {
    A a(10);
    cout << "a " << a.data_ << endl;
    A b = a;
    A c = std::move(a); // 调用移动构造函数
    cout << "b " << b.data_ << endl;

    cout << "c " << c.data_ << endl;
    return 0;
}
