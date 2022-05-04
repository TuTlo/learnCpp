#include <iostream>
using namespace std;

class Point
{
    private:
    int m_X;
    int m_Y;

    public:
    void setX(int x)
    {
        m_X = x;
    }

    int getX()
    {
        return m_X;
    }
    void setY(int y)
    {
        m_Y = y;
    }

    int getY()
    {
        return m_Y;
    }
};

class Circle
{
    private:
    int m_R;
    Point m_Center;


    public:
    void setR(int r)
    {
        m_R = r;
    }

    int getR()
    {
        return m_R;
    }

    void setCenter(Point center)
    {
        m_Center = center;
    }
    
    Point getCenter()
    {
        return m_Center;
    }

    void inInCircle()
    {

    }
    
};

void isInCircle(Circle &c, Point &p)
{   
    int distance = 
    (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    int rDistance = c.getR() * c.getR();

    if (distance == rDistance)
    {
        cout << "on circle" << endl;
    }
    else if ( distance > rDistance)
    {
        cout << "out" << endl;
    }
    else
    {
        cout << "in" << endl;
    }
}

int main()
{
    Circle c;
    c.setR(10);
    
    Point center;
    center.setX(10);
    center.setY(0);

    c.setCenter(center);

    //
    Point p;
    p.setX(10);
    p.setY(10);

    isInCircle(c, p);
    system("pause");
    return 0;
}