#include <iostream>
using namespace std;

struct Hero{
    string name;
    int age;
    string sex;
};

void bubbleSort(struct Hero heroArray[], int len){
    for (int i =0; i<len-1; i++){
        for (int j=0; j<len-i-1; j++){
            if (heroArray[j].age> heroArray[j+1].age) {
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j+1];
                heroArray[j+1] = temp;
            }
        } 
    }

}

void printInfo(struct Hero heroArray[], int len){

    for (int i=0; i< len; i++){
        cout << "name: " << heroArray[i].name << " age: " << heroArray[i].age << endl;
    }

}


int main(){
    
    struct Hero heroArry[5] =
    {
        {"A", 23, "M"},
        {"B", 22, "M"},
        {"C", 20, "M"},
        {"D", 21, "M"},
        {"E", 19, "F"},
    };

    int len = sizeof(heroArry) /sizeof(heroArry[0]);
    

    bubbleSort(heroArry, len);
    printInfo(heroArry, len);
    system("pause");

    return 0;
}