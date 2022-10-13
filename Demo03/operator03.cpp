//
// Created by liangke on 2022/10/11.
//
#include <iostream>
#include <string.h>

using namespace std;

class ClassA{
public:
    ClassA(){}
    ClassA(const char* pszInputStr)
    {
        pszTestStr = new char[strlen(pszInputStr) + 1];
        strncpy(pszTestStr, pszInputStr, strlen(pszInputStr) + 1);
    }
    virtual ~ClassA()
    {
        delete pszTestStr;
    }
    // 赋值运算符重载函数
    ClassA& operator=(const ClassA& cls)
    {
        // 避免自赋值
        if (this != &cls)
        {
            // 避免内存泄露
            if (pszTestStr != NULL)
            {
                delete pszTestStr;
                pszTestStr = NULL;
            }
            pszTestStr = new char[strlen(cls.pszTestStr) + 1];
            strncpy(pszTestStr, cls.pszTestStr, strlen(cls.pszTestStr) + 1);
        }
        return *this;
    }
public:
    char* pszTestStr;
};

int main()
{
    ClassA obj1("liitdar");

    ClassA obj2("a");
    obj2 = obj1;

    cout << "obj2.pszTestStr is: " << obj2.pszTestStr << endl;
    cout << "addr(obj1.pszTestStr) is: " << &obj1.pszTestStr << endl;
    cout << "addr(obj2.pszTestStr) is: " << &obj2.pszTestStr << endl;

    return 0;
}
