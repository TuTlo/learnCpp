#include <iostream>
using namespace std;

class Phone 
{
    public:

    Phone(string pBrand)
    {
        m_PBrand = pBrand;

        cout << "Phone constructor" << endl;
    }

    ~Phone()
    {
        cout << "Phone destructor" << endl;
    }

    string m_PBrand;
};

class Person
{
    public:

    // Phone m_Phone = pName 隐式
    Person(string name, string pName): m_Name(name), m_Phone(pName)
    {
        cout << "Person constructor" << endl;
    
    }

    ~Person()
    {
        cout << "Person destructor" << endl;
    }
    string m_Name;
    Phone m_Phone;
    
};

void test01()
{
    Person p("Sam", "Iphone");

    cout << p.m_Name << p.m_Phone.m_PBrand << endl;
}

int main(){

    test01();

    system("pause");
    return 0;
}