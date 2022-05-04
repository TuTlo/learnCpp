#include <iostream>
using namespace std;

class Person
{
    public:
    //类内声明，类外初始化
    //编译过程就分配内存
    static int m_Age;

    static void func()
    {
        m_Age = 100;
        //m_B = 200;
        cout << "static void func" << endl;
    }

    int m_B; //类外不能访问
};

int Person::m_Age = 100;

void test01()
{
    Person p;
    cout << p.m_Age << endl;

    Person p2;
    p2.m_Age = 200;
    // 同一份数据，全部成员共享
    cout << p.m_Age << endl;
}

void test02()
{
    //静态成员变量，不属于某个对象，所有对象共享同一份数据
    
    //通过对象访问
    Person p;
    cout << p.m_Age << endl;

    //通过类
    cout << Person::m_Age << endl;
    
}

void test03()
{
    Person p;
    p.func();

    Person::func();


}

int main(){

    //test01();

    //test02();

    test03();

    system("pause");
    return 0;
}