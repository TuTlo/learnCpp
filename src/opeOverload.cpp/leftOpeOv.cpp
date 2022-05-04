#include <iostream>
using namespace std;


//

class Person
{
    public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }
    friend ostream & operator<<(ostream &cout, Person &p);
private:
    // 成员函数重载左移运算符
    // 不会利用，因为无法cout在左侧
    // void operator<<()
    // {

    // }

    int m_A;
    int m_B;
};

//利用全剧函数
ostream & operator<<(ostream &cout, Person &p)
{
    cout << "Person m_A: " << p.m_A << " Person m_B: " << p.m_B << endl;

    return cout;
}


int main(){

    Person p(20, 30);


    cout << p << "Hello " << endl;

    system("pause");
    return 0;
}