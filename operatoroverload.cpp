#include <iostream>
using namespace std;
class concat{
    public:
    char s[20];
    public:
    void input(){
        cout<<"Enter your string ";
        cin>>s;
    }
    void display(){
        cout<<s;
    }
    concat operator+(concat const &x){
         concat str;
        
    }
};
int main(){
    concat s1,s2,s3;
    s1.input();
    s2.input();
    s3=s1+s2;
    s3.display();
    return 0;
}