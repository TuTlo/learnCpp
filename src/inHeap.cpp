#include <iostream>
using namespace std;

int * func() {
    //利用new 关键字将数据开辟到堆区
    //指针 本质是个局部变量，放在栈上，但是指针指向的数据，保存的数据是在堆区
    int * p = new int(10);
    return p;
}

void test01()
{
    int * p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    // 用delete 释放
    delete p;
    cout << *p << endl;   
    cout << *p << endl;   
}

void test02()
{
    int * arrP = new int[10];

    for (int i =0; i <10; i++) {
        arrP[i] = i+100;
    }

    for (int i =0; i <10; i++){
        cout << arrP[i] << endl;
    }

    //释放堆区数组
    delete [] arrP;
    for (int i =0; i <10; i++){
        cout << arrP[i] << endl;
    }
}

int main() {

    test01();

    test02();


    system("pause");
    return 0;
}