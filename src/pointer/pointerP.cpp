#include<iostream>
using namespace std;

int main() {
    // 定义指针
    int a = 10;
    int b = 10;

    // 数据类型 * 指针变量名
    int * p;
    //指针记录变量a的地址
    p = &a;

    //int *p = &a;

    cout << "a的地址： " << &a << endl;

    cout << p << endl;

    // 解引用 

    *p =1000;

    cout << *p << endl;
    cout << a << endl;

    cout << "size of int * = " << sizeof(p) << endl;


    // null pointer
    int * p0 = NULL;
  
    // 
    int * p2 = (int *)0x1100;

    // const pointer

    const int * x = &a;
    


    system("pause");
    return 0;
}