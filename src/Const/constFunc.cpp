#include <iostream>
using namespace std;

class Person
{
    //constructor
    public:
    Person()
    {
        cout << "constructor Person " << endl;
    }

    Person(int a )
    {
        age = a;
        cout << "constructor Person witn variable" << endl;
    }
    
    //copied constructor

    Person( const Person &p)
    {
        cout << "copied constructor Person " << endl;
        age = p.age;
    }

    //destructor
    ~Person()
    {
        cout << "destructor People" << endl;
    }

    // attribute
    int age;
};

//局部变量，在栈上
void test01()
{
    Person p;
};


// 
void test02()
{
    //括号法
    Person p;
    Person p2(10);
    Person p3(p2);

    //cout << "p2 age: " << p2.age << endl;

    // Person p1() 不创建对象，编译器会认为是一个函数声明 【void func()】 不会认为在创造对象


    //显示法
    Person p4;
    Person p5 = Person(10); //有参数构造

    Person p6 = Person (p2);

    // Person(10); //匿名对象
    // cout << "aaaa----aaaa" << endl;

    // 注意事项2: 不要利用拷贝构造函数 初始化匿名对象, 重定义 
    //Person(p4);

    //隐式显示法
    Person p7 =10; //with parameter
    Person p8 = p7;  

}
int main(){

    test02();
    // main 函数执行完了，才调用destructor
    
    system("pause");
    return 0;
}