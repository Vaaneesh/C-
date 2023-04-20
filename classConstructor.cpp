#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int rollno;
    int marks;
    public:
    Student (int a,int b){ //   CONSTRUCTOR
        rollno=a;
        marks=b;
    }
    
    void getdata(){
        cout<<"enter name ";
        cin>>name;
        cout<<"Your age? ";
        cin>>age;
    }
    void display(){
        cout<<"Data is"<<"\n";
        cout<<"Name "<<name<<"\n";
        cout<<"age "<<age<<"\n";
        cout<<"marks "<< marks<<"\n";
        cout<<"Roll no= "<<rollno<<"\n";
    }
};

int main() {
  Student obj(10,12);
  //obj.display();  GARBAGE VALUE CHECK
  obj.getdata();
  obj.display();
  return(0);

}
