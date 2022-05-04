#include <iostream>
using namespace std;

class BasePage
{
    public:
    void head()
    {
        cout << "header" << endl; 
    }
};

class Java: public BasePage
{
    public:
    void content()
    {
        cout << "Java " << endl;
    }
};

class Python: public BasePage
{
    public:
    void content()
    {
        cout << "Python " << endl;
    }
};

int main(){

    system("pause");
    return 0;
}