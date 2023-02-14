#include <iostream>
using namespace std;
class TShape
{
public:
    int x, y;
    void print(void)
    {
        cout << " shape" << x << "," << y << endl;
    }
    virtual float area(void) { return 0; }
};

class TRect : public TShape
{
public:
    int a, b;
    virtual float area(void) { return a * b; }
};

int main()
{
    TRect *rect = new TRect();
    rect->x = 0;
    rect->y = 0;
    rect->a = 2;
    rect->b = 8;

    TShape* shape = rect;
    shape->print();
    cout << "Area in main:" << shape->area() << endl;
    delete shape;
    return 0;

}

