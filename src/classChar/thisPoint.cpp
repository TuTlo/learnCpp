#include <iostream>
using namespace std;
//成员变量，函数分开存储
class Person
{   
    public:
    Person()
    {

    };

    Person( int age)
    {
        //this指针指向 被调用的成员函数所属的对象
        this->age = age;
    }

    int age;

    int m_A; //非静态变量属于 类对象
    public:
    static int m_B;// 静态成员变量，不属于类对象上

    void func(){}; //非静态成员函数 不属于类对象上

    static void func2() {}; //静态成员函数：不属于对象上

    Person& PersonAddAge(Person &p)
    {
        //引用的方式返回，不会创建新对象
        //值的方式返回，值传递，每次都创建一个新对象
        this -> age += p.age;

        return *this;
    }

};

int Person::m_B = 100;
void test01()
{
    Person p;

    //空对象占用内存空间：1
    //为了区分空对象占内存的位置 每个空对象有一个独一无二的内存地址

    cout << "size of p = " << sizeof(p) << endl;
}


void test02()
{
    Person p1(18);
    cout << p1.age << endl;
}

void test03()
{
    Person p1(10);
    Person p2(10);

    p2.PersonAddAge(p1);

    //链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1);

    cout << p2.age << endl;

}

int main()
{
    test03();

    system("pause");
    return 0;
}