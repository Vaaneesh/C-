#include <iostream>
using namespace std;

class Base { //base class
   public:
    void print(int roll,int marks) {
        cout << "Student details in base class" << endl;
        cout<<marks;
        cout<<roll;
    }
};

class Derived : public Base { //derived class created
   public:
    void print(int roll,int marks) {
        cout << "Student details in Derived class" << endl;
        cout<<roll<<endl;
        cout<<marks;
    }
};

int main() {
    Derived obj;
    obj.print(20,90);
    return 0;
}