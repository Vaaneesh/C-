#include <iostream>
using namespace std;
int main()
{
    int a1[5];
    int s=0;
    for (int i=0;i<=4;i++){
        cout<<"enter value for first array";
        cin>>a1[i];
    }
    for(int j=0;j<5;j++){
        s+=a1[j];
    }
    cout<<s;
} 