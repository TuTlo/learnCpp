#include <iostream>
using namespace std;

int func2(int a = 10, int b = 10);

int func2(int a , int b){
    return a + b;
}

//占位参数
void func(int a, int) {
    cout << " func a" << endl;
}


//函数重载：函数名相同，提高复用性
void foo(){
    cout << "foo" << endl;
}

void foo(int &a ){
    cout << "foo! int a " << endl;
}

void foo(const int &a){
    cout << "foo const a"<< endl;
}

//函数重载和默认参数

void func2(int a, int b, int c) {
    cout << "func2(int a, int b = 20)" << endl;
}


void func2() {
    cout << "func2(int a)" << endl;
}

int main(){

    //cout << func2() << endl;

    //func(10,10);
    
 
    // reuse func
    int a = 10;
    foo(a);


    foo(10); // foo(const int &a), const int &a = 10 合法，而int &a = 10 不合法，所以不走foo(int &a)

    // 默认参数和函数重载
    func2(10);

    system("pause");
    return 0;
}