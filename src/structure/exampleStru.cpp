#include <iostream>
using namespace std;

// student
struct student
{
    string name;
    int score;
};

struct teacher
{
    string tName;
    struct student sArray[5];

};

void allocateSpace(struct teacher tArray[], int len)
{   
    string nameSeed = "ABCDE";
    for (int i = 0; i<len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        for (int j = 0; j<5; j++)
        {
            tArray[i].sArray[j].name = "Student_";
            tArray[i].sArray[j].name += nameSeed[j];

            int random = rand() % 61 + 40; // 0-60 , 40 -100
            tArray[i].sArray[j].score = random;

        }
    }
}

void printInfo(struct teacher tArray[], int len)
{
    for (int i=0;i<len;i++) {
        cout << "teacher name: " << tArray[i].tName << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t student name: " << tArray[i].sArray[j].name << " score:  " << tArray[i].sArray[j].score << endl;
        }
    }
}

int main(){
    struct teacher tArray[3];

    // set seed
    srand((unsigned int)time(NULL));

    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);
    
    printInfo(tArray, len);
    system("pause");
    return 0;
}