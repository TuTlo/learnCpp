#include <iostream>
using namespace std;

//继承中的对象模型

class Base 
{
    public:
    int m_A;

    protected:
    int m_B;

    private:  
    int m_C;
};


class Son : public Base
{
    public:
    int m_D;

};

void test01()
{
    //  所有非静态成员属性都会被子类继承
    // 父类中 私有成员属性，被编译器隐藏，但被继承
    cout << "size of Son = " << sizeof(Son) << endl; //16
}

// 开发人员命令提示工具： c1 /dir reportSingleClassLayoutSon "file name.cpp"
int main()
{
    test01();
    system("pause");
    return 0;
}