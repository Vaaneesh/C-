#include<iostream>
using namespace std;
int main()
{
    int a,c;
    c=1;
    cout<<"enter a number ";
    cin>>a;
    for(int i=1;i<=a;i++){
        c*=i;
    }
    cout<<"Factorial => "<<c;
    return (0);
}
