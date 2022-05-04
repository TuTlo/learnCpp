#include <iostream>
using namespace std;

//编译器提供默认函数：operator=

class Person
{
    public:
    Person (int age, string name)
    {
        m_Age = age;
        m_Name = name;
    }

    // ~Person()
    // {
    //     if (m_Age != NULL)
    //     {
    //         delete m_Age;
    //         m_Age = NULL;
    //     }
    // }
    int m_Age;
    string m_Name;

    //重载 赋值运算

    // Person& operator=(Person &p)
    // {
    //     //m_Age = p.m_Age 

    //     //先判断是否有属性再堆区，如果有释放干净，再深拷贝
    //     if (m_Age != NULL)
    //     {
    //         delete m_Age;
    //         m_Age = NULL;
    //     }

    //     m_Age = new int(*p.m_Age);

    //     return *this;
    // }

    // overload inequality

    bool operator==(Person &p)
    {
        if (this->m_Name ==p.m_Name && this->m_Age == p.m_Age){
            return true;
        }
        else{
            return false;
        }
    }

    bool operator!=(Person &p)
    {
        if (this->m_Name ==p.m_Name && this->m_Age == p.m_Age){
            return false;
        }
        else{
            return true;
        }
    }

};

// void test01()
// {
//     Person p1(18);

//     Person p2(20);

//     Person p3(30);

//     p2 = p1;

//     p3 = p2 = p1;


//     cout << "p1 age: " << *p1.m_Age << endl;  
//     cout << "p2 age: " << *p2.m_Age << endl;  
//     cout << "p3 age: " << *p3.m_Age << endl;
// }

void test03()
{
    Person p1(18, "Tom");
    Person p2(18, "Tom");

    if (p1 == p2)
    {
        cout << "p1, p2, same" << endl;
    }
    else
    {
        cout << "not same" << endl;
    }

    if (p1 != p2)
    {
        cout << "p1, p2, not same" << endl;
    }
    else
    {
        cout << " same" << endl;
    }
}

int main(){

    //test01();

    test03();

    system("pause");
    return 0;
}