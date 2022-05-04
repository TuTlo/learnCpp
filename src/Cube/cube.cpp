#include <iostream>
using namespace std;

class Cube
{
    // attribute
    private:
    float m_L;
    float m_W;
    float m_H;


// method
    public:
    void setL(float l)
    {
        m_L = l;
    } 
    float getL()
    {
        return m_L;
    }

    void setW(float w)
    {
        m_W = w;
    } 
    // method  function
    float getW()
    {
        return m_W;
    }

    void setH(float h)
    {
        m_H = h;
    } 
    // method  function
    float getH()
    {
        return m_H;
    }

// get space

    float calculateS()
    {
        return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
    }

    float calculateV()
    {
        return m_L * m_W * m_H;
    }

// check equality
    bool isSameByClass(Cube &c)
    {
        if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

bool isSame(Cube &c1, Cube &c2)
    {
        if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c2.getH() == c2.getH())
        {
            return true;
        }
        else
        {
            return false;
        }
    };

int main(){

    Cube c1;

    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "c1 space: " << c1.calculateS() << " c1 volity: " << c1.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(20);
    c2.setH(10);

    bool ret = isSame(c1, c2);

    if (ret)
    {
        cout << "same" ;
    }
    else
    {
        cout << "Not same";
    }

    bool ret2 = c1.isSameByClass(c2);

    if (ret2)
    {
        cout << " same by class check";
    }
    else
    {
        cout << " Not same check";
    }

    system("pause");

    return 0;
}