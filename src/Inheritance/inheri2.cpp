#include <iostream>
using namespace std;

class Base1
{
    public: 
    int m_A;
    protected:
    int m_B;
    private:   
    int m_C;
};

class Son1: public Base1
{
    void func()
    {
        m_A = 10;
        m_B = 10;
        //m_C = 10;
    }
};

class Son2: protected Base1
{
    void func()
    {
        m_A = 1000;
        m_B = 1001;
        //m_C = 1000;
    }
};

class Son3: private Base1
{
    void func()
    {
        m_A = 103;
        m_B = 1333;


    }
};

class GrandSon3: public Son3
{
    void func()
    {
        //m_A = 3333;
    }
};




void test01()
{
    Son1 s1;
    s1.m_A = 100;
    //s1.m_B = 100; // protected, outside of class cannot access

    Son2 s2;
    //s2.m_A = 100;  protected inheritance: become protected
}


int main()
{
    system("pause");
    return 0;
}