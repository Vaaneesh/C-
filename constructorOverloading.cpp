#include <iostream>
using namespace std;
class Student{
    public:
    int rn,age;
    Student (int a,int b){ 
        rn=a;
        age=b;
    }
    Student(Student &a){
        rn=a.rn;
    }
    void disp(){
        cout<<rn<<endl;
        cout<<age<<"\n";
    }
};
int main(){
    Student j(1483,19);
    Student i(j);
    j.disp();
    i.disp();
    cout<<i.rn;
    return 0;

}