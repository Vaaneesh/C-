#include<iostream>
using namespace std;
int main()
{
    int a,s,c;
    cout<<"enter a number ";
    cin>>a;
    while(a>0){
        c=a%10;
        s=s+c;
        a=a/10;
    }
    cout<<"sum of digits=> "<<s;
    return 0;
}