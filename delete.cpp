#include <iostream>
using namespace std;
class Student{
    public:
    int c;
    Student(){
        cout<<"hello";
    }
    Student(int a){
        c=a;
    }
    void display(){
        cout<<c;
    }

};
int main(){
    Student *b= new Student(2);
    Student *d=new Student(23);
    Student *e=new Student(33);
    b->display();
    cout<<endl<<&b<<endl;
    delete b;
    b->display();
    cout<<endl<<&b;
}