#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 numbers ";
    cin>>a;
    cin>>b;
    cin>>c;
    if((a>b) &&(a>c)){
        cout<<" A is largest";

    }
    else if((b>a) &&(b>c)){
        cout<<"B is largest";
        
    }
    else if((c>b) &&(c>a)){
        cout<<" C is largest";
        
    }
    else{
        if(a==b && a>c)
        cout<<"A and b is greatest";
        
        else if(c==b && c>a)
        cout<<"C and b is greatest";

        
        else if(a==c && c>b)
        cout<<"A and C is greatest";

        else
        cout<<"All are equal";
    }
    return 0;
}