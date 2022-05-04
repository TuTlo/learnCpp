#include <iostream>
using namespace std;

void swap2 (int * p1, int * p2) {
    int temp = *p1; // temp = 10 已经解引用了
    *p1 = *p2; //解引用
    *p2 = temp;
}

int main() {
    int a = 10;
    int b = 20;

    swap2(&a, &b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl; 
    

    //地址传递可以改变实参
    //值传传递不能修改实参

    system("pause");
    
    return 0;
}