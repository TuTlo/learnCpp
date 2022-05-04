#include <iostream>
using namespace std;

class Animal
{
    public:
    void speak()
    {
        cout << "speak ,,,," << endl;
    }
};


class Cat: public Animal 
{
    public:
    void speak()
    {
        cout << "mew...." << endl;
    }
};

class Dog: public Animal 
{
    public: 
    void speak()
    {
        cout << "wowng /// " << endl;
    }
};


//地址早绑定
//编译阶段就确定了地址
void doSpeak(Animal &animal) //父类的饮用可以直接调用子类数据
{
    animal.speak(); //允许父子之间类型转换，不需要强制转换
};

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

void test02()
{
    Animal animal;
    cout << sizeof(animal) << endl;

    //vfptr : virtual function pointer, 指向虚函数表 vftable
}

int main(){

    test02();

    system("pause");
    return 0;
}