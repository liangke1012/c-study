//
// Created by liangke on 2022/10/31.
//
#include <iostream>
using namespace std;
class Student{
public:
    Student(char *name, int age, float score);
public:
    void show();
    //三个常函数
    char *getname() const;
    int getage() const;
    float getscore() const;
private://三个常变量
    char *m_name;
    int m_age;
    float m_score;
};
//常变量的赋值方式：参数列表
Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){ }

//常函数的作用就是获取常变量的值，但是又不能修改它们的值，这种措施主要还是为了保护数据而设置的
char * Student::getname() const{
    return m_name;
}
int Student::getage() const{
    return m_age;
}
float Student::getscore() const{
    return m_score;
}

int main(){
    //stu、pstu 分别是常对象以及常对象指针，它们都只能调用 const 成员函数。
    const Student stu("小明", 15, 90.6);
    cout<<stu.getname()<<"的年龄是"<<stu.getage()<<"，成绩是"<<stu.getscore()<<endl;
    const Student *pstu = new Student("李磊", 16, 80.5);
    //pstu -> show();  //error
    cout<<pstu->getname()<<"的年龄是"<<pstu->getage()<<"，成绩是"<<pstu->getscore()<<endl;

    return 0;
}
