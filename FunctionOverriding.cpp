#include <iostream>
using namespace std;
 
class class1{
public:
    void print()
    {
        cout << "You called in Base class" << endl;
    }
};
 
class class2 : public class1 {
public:
    void print()
    {
        cout << "you called in Derived class" << endl;
    }
};
 
int main()
{
    class2 obj;
    obj.print();
    return 0;
}