#include <iostream>
using namespace std;

// bubble sort
// 用指针接收首地址来传入函数
void bubbleSort(int * arr, int len) {
    for (int i; i < len -1; i++) {
        for (int j; j <len-i-1; j++) {
            if (arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}


void printArray(int * arr, int len) {
    for ( int i =0; i <len; i++) {
        cout << arr[i] << endl;
    }
}


int main() {

    int arr[10] = {3,2,6,4,1,7,8,9,0,5};

    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);

    printArray(arr, len);

    system("pause");
    return 0;
}