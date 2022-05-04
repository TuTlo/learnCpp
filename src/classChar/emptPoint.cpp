#include <iostream>
using namespace std;

class Person
{
    public:
    void showClassName()
    {
        cout << "this is Person class" << endl;
    }

    void showName()
    {
        if(this == NULL)
        {
            return;
        }
        //传入空指针，访问成员属性
        cout << this->m_Age << endl;
    }

    int m_Age;
};

void test01()
{
    Person *p = NULL;

    p->showClassName();
    p->showName();
}

int main(){

    test01();

    system("pause");
    return 0;
}