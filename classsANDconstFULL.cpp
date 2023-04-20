#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int rno;
    public:
    Student(){
        name=" ";
        rno=0;
        age=0;
    }
    Student(string n,int a,int b){
        name=n;
        age=a;
        rno=b;
    }
    void getdata(){
        cout<<"Enter Values ";
        cin>>name>>rno>>age;
    }
    void display(){
    cout<<name<<" "<<rno<<" "<<age;
   }
};
int main(){
    Student obj("vasu",1483,19);
    /*obj.getdata();
    obj.display();
    /*Student *p=new Student();
    p->getdata();
    p->display();
    cout<<endl<<&p;
    Student *q=new Student();
    q->getdata();
    cout<<endl<<q;*/
    Student *r=new Student("vasu",1483,19);
    r->display();
    cout<<r;


}