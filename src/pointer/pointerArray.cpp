#include <iostream>
using namespace std;

int main() {

    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    int * p = arr;  // point to initial address for arr 指向数组的首地址

    cout << *p << endl; //访问第一个元素

    p++; // point to next , plus 4 bit to be clear
    system("pause");
    return 0;
}