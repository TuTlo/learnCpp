#include <iostream>
using namespace std;

//多态实现

class AbstractCalculator
{
    public:
    virtual int getResult()
    {
        return 0;
    }

    int m_Num1;
    int m_num2;
    
};

//加法计算器类
class AddCalculator : public AbstractCalculator
{
    public:  
    int getResult()
    {
        return m_Num1 + m_num2;
    }
};

class minusCalculator : public AbstractCalculator
{
    public:  
    int getResult()
    {
        return m_Num1 - m_num2;
    }
};

class multiCalculator : public AbstractCalculator
{
    public:  
    int getResult()
    {
        return m_Num1 * m_num2;
    }
};

void test01()
{
    AbstractCalculator * abc = new AddCalculator; // 父类指针，指向子类对象 在堆区，需手动释放
    abc->m_Num1 = 10;
    abc->m_num2 = 10;

    cout << abc->m_Num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;

    delete abc;

    abc = new minusCalculator;
    abc->m_Num1 = 10;
    abc->m_num2 = 10;

    cout << abc->m_Num1 << " - " << abc->m_num2 << " = " << abc->getResult() << endl;

    delete abc;

    abc = new multiCalculator;
    abc->m_Num1 = 10;
    abc->m_num2 = 10;

    cout << abc->m_Num1 << " * " << abc->m_num2 << " = " << abc->getResult() << endl;

    delete abc;
};

int main(){
    test01();
    system("pause");
    return 0;
}