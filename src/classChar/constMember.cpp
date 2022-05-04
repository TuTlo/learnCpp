#include <iostream>
using namespace std;

class Person
{
    public:
    Person()
    {

    }
    
    void showPerson() const
    {
        //this 指针本质：指针常量，指向不可以修改
        // 成员函数后加const， 修饰this指向，指针指向的值耶不可以修改
        //this->m_A = 100;
        this -> m_B = 100;

    }

    void func()
    {

    }

    int m_A;
    mutable int m_B;

};

void test01()
{
    Person p;
    p.showPerson();
}

void test02()
{
    const Person p;
    //p.m_A = 100;
    p.m_B = 100;

    //p.func();
}

int main(){

    system("pause");
    return 0;
}