#include <iostream>
using namespace std;

//仿函数 函数调用运算符重载

class MyPrint
{
    public:

    void operator()(string test)
    {
        cout << test << endl;
    }
};

void test01()
{
    MyPrint myprint;

    myprint("Hello World");
}

void MyPrint02(string test)
{   
    cout << test << endl;
}

class MyAdd
{
    public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};

void test02()
{
    MyAdd myadd;
    int res = myadd(100,100);
    cout << res << endl;

    //匿名函数
    cout << MyAdd()(200,200) << endl;
}
int main()
{
    test01();

    test02();

    MyPrint02("Hello world!");

    system("pause");

    return 0;
}