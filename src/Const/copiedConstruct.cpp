#include <iostream>
using namespace std;

class Person
{
    public:
    Person()
    {
        cout << "构造函数" << endl;
    }

    Person(int age, int height)
    {
        cout << "有参构造" << endl;
        m_Age = age;
        m_Height = new int(height);
    }

    Person(const Person &p)
    {
        cout << "拷贝构造" << endl;
        m_Age = p.m_Age;
        //m_Height = p.m_Height; 编译器默认实现的是这行代码

        m_Height = new int(*p.m_Height);
    }

    ~Person()
    {
        // heap 区数据释放
        if (m_Height != NULL) 
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "析构函数" << endl;
    }

    
    int m_Age;
    int *m_Height;// in heap
};

void test01()
{   
    //用已创建完毕对象 初始化一个新的
    Person p1(20, 160);
    Person p2(p1);
    
    cout << "p2年龄： " << p2.m_Age << endl;

}

void doWork(Person p)
{

}
void test02()
{
    //以值传递方式，给函数参数传值
    Person p;
    doWork(p);

}

Person doWork2()
{
    Person p1;
    cout << (int *) &p1 << endl; 
    return p1;
}

void test03()
{
    Person p = doWork2();
    cout << (int*)&p << endl;
}

void testCopy()
{
    //深拷贝与浅拷贝
    Person p1(18, 160);

    cout << "p1: " << (*p1.m_Height) << endl;

    Person p2 (p1);

    cout << "p2: " << (*p2.m_Height) << endl;
}
int main(){

    testCopy();

    system("pause");
    return 0;
}