#include <iostream>
using namespace std;

class Person
{
    public:
    // set name
    void setName(string name)
    {
        m_Name = name; 
    };

    string getName()
    {
        return m_Name;
    }

    int getAge()
    {   
        //m_Age = 0;
        return m_Age;
    }

    void setAge(int age)
    {
        if (age >=0 && age <= 150)
        {
            m_Age = age;
        }
        else
        {   
            m_Age = 0;
            cout << "wrong age range" << endl;
            return;
        }
    }

    void setLover(string lover)
    {
        m_Lover = lover;
    }


    // get name
    private:
    string m_Name;
    int m_Age;
    string m_Lover;
};

int main()
{
    Person p;
    p.setName("Sam");
    p.setAge(18);
    
    cout << p.getName() << endl;

    cout << p.getAge() << endl;

    // p.m_Lover (Inaccessible)

    system("pause");
    return 0;


}