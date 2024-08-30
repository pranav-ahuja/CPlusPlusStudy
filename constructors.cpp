#include<iostream>

using namespace std;

#define LENGTH          1
#define BREADTH         2

class Rectangle
{
    private:
    
    int len;
    int bread;
    
    public:

    Rectangle(int l = 1, int b = 4)
    {
        setLengthBreadth(l, LENGTH);
        setLengthBreadth(4, BREADTH);
    }

    Rectangle(Rectangle &rect)
    {
        len = rect.len;
        bread = rect.bread;
    }

    void setLengthBreadth(int size, int lengthOrBreadth)
    {
        if(lengthOrBreadth == LENGTH)
        {
            if(size > 0)
                len = size;
            else    
                len = 1;
        }
        else if(lengthOrBreadth == BREADTH)
        {
            if(size > 0)
                bread = size;
            else
                bread = 1;
        }
    }

    int getLength()
    {
        return len;
    }

    int getBreadth()
    {
        return bread;
    }

    int area()
    {
        return len*bread;
    }

    int perimeter()
    {
        return 2*(len + bread);
    }
};


int main()
{
    Rectangle defaultConsRect(5, 10);
    Rectangle copyConstRect(defaultConsRect);

    cout<<defaultConsRect.getLength()<<endl;
    cout<<defaultConsRect.getBreadth()<<endl;
    cout<<defaultConsRect.area()<<endl;

    cout<<copyConstRect.getLength()<<endl;
    cout<<copyConstRect.getBreadth()<<endl;
    cout<<copyConstRect.area()<<endl;
    
}