#include <iostream>
using namespace std;

class Student
{
    // 类中的属性和行为 称为成员
public:
    // 成员属性 成员变量
    string studentName;
    int studentId;


    // method
    void showInfo()
    {
        cout << "student name: " << studentName << " student ID: " << studentId << endl;
    }

    void setName(string name)
    {
        studentName = name;
    }

    void setId(int id)
    {
        studentId = id;
    }


};


    //public: 公共，成员 类内可以访问， 类外也可以访问
    //protected：保护 成员 类内可以访问，类外不可以访问 （父类的成员，子类可以访问）
    //private：private 成员 类内可以访问，类外不可以访问 （继承上有区别：子类不可以访问）
    //变量 一般用 m_打头

class Person
{
    public:
    string personName;

    protected:
    string personCar;

    private:
    int personPassword;

    public:
    void func()
    {
        personName = "Lee";
        personCar = "拖拉机";
        personPassword = 123456;
    }
};


class C1 
{
    int m_A;//private

};


struct S1
{
    int m_A;//public
};

int main(){

    Student student1;

    student1.setName("Sam");
    student1.setId(1);

    student1.showInfo();


    Person person1;
    person1.personName = "Chong";
    //person1.personCar = "奔驰";

    C1 c1;
    //c1.m_A = 10; inaccessible

    S1 s1;
    s1.m_A = 100;

    system("pause");
    return 0;
}