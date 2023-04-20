#include <iostream>
using namespace std;
class Student{
    public:
    int j;
    public:
    Student(){
    }
    Student(int counter){
        j=counter;
        cout<<j;
    }
        ~Student(){
            cout<<j;
    }
};
int main(){
    Student *a;
    for (int i=0;i<=3;i++){
        a[i]=Student(i);
        /*cout<<&a[i];*/
    }

}