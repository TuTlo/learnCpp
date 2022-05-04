#include <iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        m_A = 100;
        cout << "Base constructor... " << endl;
    }

    ~Base()
    {
        cout << "Base destructor..." << endl;
    }

    void func()
    {
        cout << "Base func()" << endl;
    }

    void func(int a)
    {
        cout << "Base func(int a )" << endl;
    }

    int m_A;
};

class Son: public Base 
{
    public:
    Son()
    {
        m_A = 200;
        cout << "Son constructor..." << endl;
    }

    ~Son()
    {
        cout << "Son destructor..." << endl;
    }

    int m_A;

    void func()
    {
        cout << "Son - func()" << endl;
    }

};

void test01()
{
    // 在栈上
    Son s;
    cout << "S m_A " << s.m_A << endl;
    cout << "Base m_A " << s.Base::m_A << endl;

}


void test02()
{
    // function with same name
    Son s;
    s.func();

    s.Base::func();

    //s.func(100); overload does not overload son  class function
    s.Base::func(100);
}

int main()
{
    test02();
    system("pause");
    return 0;
}