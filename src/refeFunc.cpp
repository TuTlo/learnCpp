#include <iostream>
using namespace std;

//1. pass by value
void swap1(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
}

//2. pass by address
void swap2(int * a, int * b) {
    int temp = * a ;
    * a = * b;
    * b = temp;
}
    
void swap3(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// int& test01()
// {
//     // 不要返回局部变量的引用值
//     int x = 10;
//     return x;
// }

int& test02()
{
    // 不要返回局部变量的引用值
    static int x = 10; //static： 静态变量，在全局区，全局区数据在程序结束后系统释放
    return x;
}


int main() {
    int a = 10;
    int b = 20;

    //swap2(&a, &b); //&a, 地址，要传进指针
    swap3(a, b);

    // cout << a << b << endl;

    int &ref = test02();
    //相当于 int* const ref = &test02()
    cout << "ref: " << ref << endl;

    cout << "ref: " << ref << endl;

    test02() = 1000;

    cout << "after: ref: " << ref << endl;

    system("pause");
    return 0;
}