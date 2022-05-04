#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream & operator<<(ostream &cout, MyInteger p);

    public:
    MyInteger()
    {
        m_Num = 0;
    }


    //返回引用，是为了对一个数据进行增加修改
    MyInteger& operator++()
    {
        m_Num++;
        return *this;
    }
    MyInteger operator++(int)
    {
        //先记录结果
        MyInteger tmp = *this; //局部变量，返回值，返回引用是非法，因为局部变量会释放
        m_Num++;

        return tmp;

    }
    private:
    int m_Num; 
};


ostream & operator<<(ostream& cout, MyInteger p)
{
    cout << p.m_Num ;

    return cout;
}

void test01()
{
    MyInteger myint;
    cout << ++myint << endl;
    cout << myint << endl;
}

// int占位参数


void test02()
{
    MyInteger myint;
    cout << myint++ << endl;
    cout << myint << endl;

}

int main(){

    test02();

    system("pause");
    return 0;
}