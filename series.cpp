#include<iostream>
using namespace std;
int main()
{
   int a,s=0;
   cout<<"Enter a number ";
   cin>>a;
   for(int i=1;i<=a;i++){
       s=s+(i*i);
   }
    cout<<"Sum of series => "<<s;
}