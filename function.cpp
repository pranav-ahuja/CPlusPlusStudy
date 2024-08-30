#include <iostream>

using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l = 5, int b = 10);
        Rectangle(Rectangle &rect);
        int getLength(){return length;}
        int getBreadth(){return breadth;}

        void setLength(int l);
        void setBreadth(int b);
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};
Rectangle::Rectangle(int l = 4, int b = 10)
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
}

void Rectangle::setLength(int l)
{
    if(l>0)
        length = l;
    else 
        length = 1;
}

void Rectangle::setBreadth(int b)
{
    if(b > 0)
        breadth = b;
    else{
        breadth = 1;
    }
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::area()
{
    return length * breadth;
}
        
int Rectangle::perimeter()
{
    return 2*(length + breadth);
}

bool Rectangle::isSquare()
{
    if(length == breadth)
        return true;
    else
        return false;
}

Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed"<<endl;
}

int main()
{
    Rectangle scopeRect(5,10);

    // cout<<scopeRect.getLength()<<endl;
    // cout<<scopeRect.getBreadth()<<endl;
    cout<<scopeRect.perimeter()<<endl;
}