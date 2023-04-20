#include<iostream>
using namespace std;
int main()
{
    int i=1,j=0;
    cout<<"i -> "<<i<<" j -> "<<j<<endl;
    j=++i + i++ + ++i + i++ + ++i;
    cout<<"i -> "<<i<<" j -> "<<j;
    return(0);
}