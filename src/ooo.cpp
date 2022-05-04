#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
    //访问权限
    public:

    //属性
    int m_r;

    //行为
    double calculateLen()
    {
        return 2 * PI * m_r;
    }
};

int main() {

    // 实例化
    Circle c1;

    c1.m_r = 2;

    cout << c1.calculateLen() << endl;

    system("pause");
    return 0;
}