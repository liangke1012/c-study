//
// Created by liangke on 2022/10/11.
//
#include<iostream>
using namespace std;

class human {
public:
    human(string name)//先调用：父类默认析构调用一个print打印name
            :_name(name)
    {
        cout << name << endl;
    }
    ~human()
    {
        cout << "我是父类" << endl;
    }
protected:
    string _name;
};


class student :public human {//后调用：子类默认析构调用一个print打印name和age
public:
    student(string name,int age)
            :human(name),_age(age)
    {
        cout << name << endl<<age<<endl;
    }
    student(student& s): human(s),_age(s._age){
        cout << s._age << "   " << s._name << endl;
    }
    ~student()
    {
        cout <<"我是子类"<< endl;
    }
    void print(const student& st){
        cout << st._name << "   "  << st._age<<endl;
    }
protected:
    int _age;
};
int main()
{
    student st("小红", 18);
    student st2(st);
    return 0;
}

