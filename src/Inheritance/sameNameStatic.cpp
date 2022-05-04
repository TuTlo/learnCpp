#include<iostream>
using namespace std;

// 继承中同名静态成员处理方式

class Base 
{
    public:
    static int m_A;

    static void func()
    {
        cout << "Base : static func()" << endl;
    }
};
int Base::m_A = 100;

class Son: public Base
{
    public:
    static int m_A;

    static void func()
    {
        cout << "Son: static func()" << endl;
    }
};

int Son::m_A = 200;


void test01()
{
    Son s;
    //通过对象访问
    cout << "son: m_A: " << s.m_A << endl;

    cout << "Base: m_A: " << s.Base::m_A << endl;

    //通过类名访问数据
    cout << "class: " << endl;

    cout << "Son: m_A" << Son::m_A << endl;

    cout << "Base: m_A" << Base::m_A << endl;

    //通过子类对象访问父类数据
    // 第一个::代表通过类名
    // 第二个::代表 作用域
    cout << "from son: m_A " << Son::Base::m_A << endl;


}

void test02()
{
    Son s;
    s.func();
    s.Base::func();


    cout << "from class "<< endl;
    Son::func();
    Son::Base::func();        
}


int main(){
    test01();

    system("pause");
    return 0;
}