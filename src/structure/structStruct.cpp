#include <iostream>
using namespace std;

//结构体嵌套结构体

struct student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;
};


void printStud(struct student s) {

};

void printStudent(struct student * p) {
    p->name = "new";
    cout << "student name: " << p->name << endl;
};


int main() {

    teacher t;
    t.id = 10000;
    t.name = "Wang";
    t.age = 40;
    t.stu.age = 16;
    t.stu.name = "Sam";
    t.stu.score = 60;

    cout << "teacher: " << t.name << " student : " << t.stu.name << endl;
    
    student s = {"some", 1, 2};
    printStudent(&s);

    system("pause");
    return 0;
}