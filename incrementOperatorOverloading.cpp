#include <iostream>
using namespace std;
 
class Increment {
    int i;
public:
    Increment(int i = 0)
    {
        this->i = i;
    }
 
    Increment operator++()
    {
        Increment neww;
        neww.i = ++i;
        return neww;
    }
 
    void output()
    {
        cout << "i = " << i << endl;
    }
};
int main()
{
    Increment i1(7);
 
    cout << "Before increment: ";
    i1.output();
 
    Increment i2 = ++i1;
    cout << "After pre increment: ";
    i2.output();
}