#include <iostream>
using namespace std;

class Building;
class GoodGay;

class GoodGay
{
    public:
    GoodGay();

    void visit();

    void friendVisit();

    void nomalVisit();

    // 指向
    Building *building;
};


class Building
{
    // global function as friend
    friend void goodGay(Building *building);


    // class as friend
    //friend class GoodGay;

    // 
    friend void GoodGay::friendVisit();

    public:
    Building();
    string m_SittingRoom;

    private:
    string m_BedRoom;
};

//类外实现成员函数
Building::Building()
{
    m_SittingRoom = "Living Room";
    m_BedRoom = "Bedroom";
};


//global function as friend
void goodGay(Building *building)
{
    cout << " Accesing " << building->m_SittingRoom << endl;

    cout << " Accesing " << building->m_BedRoom << endl;
}

//class . as friend



GoodGay::GoodGay()
{   
    building = new Building;

}

void GoodGay::visit()
{
    cout << "GoodGay class accessing: " << building ->m_SittingRoom << endl;
    //cout << "GoodGay class accessing: " << building ->m_BedRoom << endl;
}

void GoodGay::nomalVisit()
{
    cout << "GoodGay function normal visit: " << building -> m_SittingRoom << endl;
}

void GoodGay::friendVisit()
{
    cout << "GoodGay function friendVisit: " << building -> m_BedRoom << endl;
}

void test01()
{
    // global function as friend
    Building building;
    goodGay(&building);
}


void test02()
{
    GoodGay gg;
    gg.visit();
}

void test03()
{
    GoodGay gg2;
    gg2.nomalVisit();
    gg2.friendVisit();
}

int main(){

    test03();

    system("pause");
    return 0;
}