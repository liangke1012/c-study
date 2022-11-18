//
// Created by liangke on 2022/11/17.
//
#include <iostream>
using namespace std;

int main(){
    const int c = 2,&ci = c ,c2 = 9;
    auto b = c;//b为int型变量，因为规则1,b`并不是一个const int型的常量`
    auto b1 = ci;
    b =4;b1 =5;//b和b1的值可以改变

    auto cp = &ci;//cp是一个指向常量的指针const int* ,因为&ci对常量对象取地址是底层const，无顶层const属性
    cp = &c2;

    int z = 9,z1 = 10;
    int* const pz1 = &z;//pz1为int* const(顶层const)
    const int* pz2 = &z;//pz2为const int* (底层const)
    const int* const pz3= &z;//pz3为const int* const（同时包含底层和顶层const）
    auto apz1 = pz1;//apz1为int*
    auto apz2 = pz2;//apz2为const int*
    auto apz3 = pz3;//apz3为const int*
    /**
    *********************声明为auto引用：auto &*****************************
    **/
    int i = 0,&ri = i;
    const int c1 = 2,&rc1 =c1;

    auto & j = i;
    auto & k = c1;
    //auto & h = 42;//错误,不能将非常量引用绑定字面值,这是引用&规则决定的

    const auto &j2 = i; //j2为const int &，因为规则3，j2被提升为顶层const
    const auto &k2 = c1; //k2为const int &
    const auto &h2 = 42; //正确，可以为常量绑定字面值

    //auto& m =  &i;//Error，无法从“int *”转换为“int *&” ,这是引用&规则决定的
    //auto& m1 = &c1;// Error，无法从“const int *”转换为“const int *&” ,这是引用&规则决定的
    const auto &m2 = &i;//m2为int * const &
    const auto &m3 = &ci;//m3为const int * const &

    return 0;

}