#include<iostream>
using namespace std;
int num;
struct add
{
    int ar[20];
};
add operator+(add &a1,add &a2)
{
    add a3;
    for(int i=0;i<num;i++)
        a3.ar[i]=a2.ar[i]+a1.ar[i];
    return a3;
}
int main()
{
    add a1,a2,a3;
    cout<<"How many elements to be stored (max 20) : ";
    cin>>num;
    cout<<"Enter elements of array a1 : ";
    for(int i=0;i<num;i++)
        cin>>a1.ar[i];
    cout<<"Enter elements of array a2 : ";
    for(int i=0;i<num;i++)
        cin>>a2.ar[i];
    a3=a1+a2;
    cout<<"Addition of two arrays : ";
    for(int i=0;i<num;i++)
        cout<<a3.ar[i]<<" ";
    return 0;
}