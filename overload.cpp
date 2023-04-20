#include<iostream>
using namespace std;
    int area(int);
    int area(int,int);
    int area(int,float);
    int area(int a)
    {
        float r;
         r=3.14*a*a;
        return(r);
    }
    int main(){
        int x;
        cout<<"Enter radius ";
        cin>>x;
        int Area=area(x);
        cout<<Area;
        return 0;
    }
