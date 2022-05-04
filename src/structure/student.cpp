#include <iostream>
using namespace std;

struct Student
{
    // member list
    string name;
    int age;
    int score;
}s3;

int main() {
    struct Student s1;
    s1.name = "Chen";
    s1.age = 22;
    s1.score = 75;

    struct Student s2 = {"Lee", 20, 90};

    s3.name = "Lam";
    s3.age = 21;
    s3.score = 80;

    cout << "first student: "<< s1.name << endl;

    cout << "second: " << s2.name << s2.age << s2.score << endl;


    //结构体数组
    struct Student struArray[3] = 
    {
        {"one", 1, 2},
        {"two", 3, 4},
        {"three", 5, 6}
    };

    struct Student s = {"SHAN", 19, 100};
    // 结构体指针
    struct Student * p = &s;

    cout << "age of s : " << p->age << endl;

    system("pause");
    return 0;
}