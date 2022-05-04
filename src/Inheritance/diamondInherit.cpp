#include <iostream>
using namespace std;

class Animal
{
    //虚基类
    public:
    int m_Age;
};

class Sheep: virtual public Animal
{

};

class Tuo: virtual public Animal
{

};

//利用虚继承 解决菱形继承的问题
// virtual public xxx
class SheepTuo: virtual public Sheep, public Tuo
{

};

void test01()
{
    SheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;

    //羊驼的数据 有两份，资源浪费
    cout << st.m_Age << endl;
}

int main(){
    test01();
    system("pause");
    return 0;
}

//vbptr : virtual base pointer 虚基类指针，指向vbtable 虚基类表