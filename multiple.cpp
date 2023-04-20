#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a value ";
    cin>>a;
    if(a%3==0 || a%7==0)
    {
        cout<<"number is divisible  by 3 or 7";

    }
    else{
        cout<<"Number is not divisible";
    }
}