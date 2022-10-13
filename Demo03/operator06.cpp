//
// Created by liangke on 2022/10/11.
//
#include <iostream>
using namespace std;
class human {
public:
    human(string name)
            :_name(name)
    {
    }
    human& operator=(const human& p)
    {
        if (this != &p)
        {
            cout << "调用父类" << endl;
            _name = p._name;
        }
        return *this;
    }
protected:
    string _name;
};
class student :public human {
public:
    student(string name, int age)
            : human(name),_age(age)
    {
    }
    student(student& s)
            :human(s)
            , _age(s._age)
    {
    }
    student& operator=(const student& s)
    {
        if (this != &s)
        {
            cout << "调用了子类" << endl;
            human::operator=(s);//必须调用父类运算符
            _age = s._age;
            _name = s._name;
        }
        return *this;
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
    st.print(st);
    student st2(st);
    st2.print(st2);
    student st3("小刚", 16);
    st3.print(st3);
    st = st3;
    st.print(st);
    return 0;
}