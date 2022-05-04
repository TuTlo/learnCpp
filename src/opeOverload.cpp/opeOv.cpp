#include <iostream>
using namespace std;


//

class Person
{
    public:

    Person operator+(Person &p)
    {
        Person tmp;
        tmp.m_A = this->m_A + p.m_A;
        tmp.m_B = this->m_B + p.m_B;
        return tmp;
    }
    int m_A;
    int m_B;
};

// Person operator+(Person &p1, Person &p2)
// {
//     Person tmp;
//     tmp.m_A = p1.m_A + p2.m_A;
//     tmp.m_B = p1.m_B + p2.m_B;
//     return tmp;
// }

Person operator+(Person &p1, int num)
{
    Person tmp;
    tmp.m_A = p1.m_A + num;
    tmp.m_B = p1.m_B + num;
    return tmp;
}

void test01()
{
    Person p1;
    Person p2;

    p1.m_A = 10;
    p1.m_B = 10;

    p2.m_A = 10;
    p2.m_B = 10;

    Person p3;

    p3 = p1 + p2;
    // 成员函数 运算符重载本质 
    //p3 = p1.operator+(p2);

    // 全局函数 运算符重载本质
    //p3 = operator+(p1, p2);
    cout << p3.m_A << endl;
    cout << p3.m_B << endl;

    //运算符重载可以发生 函数重载
    Person p4 = p1 + 1000;
    cout << p4.m_A << endl;
    cout << p4.m_B << endl;
}


int main(){
    test01();

    system("pause");
    return 0;
}