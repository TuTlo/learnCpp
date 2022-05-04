#include <iostream>
using namespace std;

//不要返回局部变量地址
int* func(){
    int a = 10;
    return &a;
}

int main(){

    int * p = func();//用指针接收func的返回值

    cout << *p << endl; //编译器做了一次保留

    cout << *p << endl; // 内存已经被释放

    // 引用， reference
    int c = 10;
    int &b = c;

    system("pause");
    return 0;
}