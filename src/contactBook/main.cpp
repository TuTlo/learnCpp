#include <iostream>
using namespace std;
#define MAX 1000

void showMenu(){
    cout << "1: add contact" << endl;
    cout << "2: show contact" << endl;
    cout << "3: delete contact" << endl;
    cout << "4: search contact" << endl;
    cout << "5: edit contact" << endl;
    cout << "6: clear contact" << endl;
    cout << "0: quit" << endl;
}

// contact
struct Person
{
    string name;
    int sex;
    int age;
    string phone;
    string addr;
};

// 
struct Book
{
    struct Person personArray[MAX];
    int size;
};

void addPerson(Book * book)
{
    if (book->size >= 1000){
        cout << "storage full" << endl;
        return;
    }
    else {

        // input name
        string name;
        cout << "please input name : " << endl;
        cin >> name;
        book->personArray[book->size].name = name;

        // input sex
        while (true) {
            cout << "1 -- male, 2 -- female" << endl;
            int sex = 0;

            if (sex == 1 | sex == 2) {
                book->personArray[book->size].sex = sex;
                break;
            }
            else {
                cout << "invalid, try again" << endl;
            }
        }
        // age
        // addr
        // phone

        // increase size
        book->size++;
        cout << "added" << endl;
        system("pause"); //任意键继续
        system("cls"); //清屏
    }
};

//show
void showBook(struct Book * book)
{
    if (book->size ==0) {
        cout << "empty book" << endl;
    }
    else {
        for (int i = 0; i <= book->size; i++){
            cout << "name" << "sex" << "age" << endl;
            cout << book->personArray[i].name << "\t";
            cout << (book->personArray[i].sex == 1 ? "M":"F") << "\t";
        }
    }

    system("pause");
    system("cls");
};

int isExit(struct Book * book, string name)
{   
    for (int i = 0; i < book -> size; i++){
        if (book->personArray[i].name == name){
            return i;
        }
    }
    return -1;
}

//delete
void deletePerson(struct Book * book, int pos)
{
    string name;
    cin >> name;

    int ret = isExit(book, name);

    if ( ret != -1 ){
        for (int i = ret; i < book->size; i++) {
            book->personArray[i] = book->personArray[i+1];

        }
        book->size--;
    }
    else {
        cout << " no such person" << endl;
    }

    system("pause");
    system("cls");
}


void searchPerson(Book * p) {

};


void clearBook(Book * p) {
    p -> size = 0;
}


int main() {

    int select = 0;

    //initialize book
    Book book;
    book.size=0;

    while (true)
    {
        showMenu();

        cin >> select;

        switch (select)
        {
        case 1:
            addPerson(&book);//传地址 
            break;//add
        case 2:
            showBook(&book); 
            break;//show
        case 3: 
        {
            string name;
            cin >> name;
            if ( isExit(&book, name) == -1) {
                cout << "not result" << endl;
            }
            else {
                deletePerson(&book, isExit(&book, name));
            }
            break;//delete
        }
        case 4: 
            break;//search
        case 5: 
            break;//edit
        case 6: 
            break;//clear
        case 0:
            cout << "Bye~" << endl;
            system("pause");
            return 0; 
            break;
            
        }
    }
}